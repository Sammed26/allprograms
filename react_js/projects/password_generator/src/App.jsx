import { useCallback, useState, useEffect, useRef } from 'react'

import './App.css'

function App() {
  
  const [length, setlength] = useState(8);
  const [numberallowed, setnumberallowed] = useState(false);
  const [charallowed, setcharallowed] = useState(false);
  const [password, setpassword] = useState("");


  const password_reference = useRef(null);

  const copy_to_clipboard = useCallback(()=>{

    password_reference.current?.select();

      window.navigator.clipboard.writeText(password);

  }, [password])


  const passwordgen = useCallback(()=>{

    let pass = "";
    let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    if(numberallowed)
    {
      str += "0123456789";
    }
    if(charallowed)
    {
      str += "+-=$!%";
    }

    for(let i = 0; i<length; i++)
    {
      let ch = Math.floor(Math.random() * str.length);
      pass += str.charAt(ch);
    }

    setpassword(pass);

  }, [numberallowed, length, charallowed, setpassword])


  useEffect(()=>{
    passwordgen();
  }, [length, numberallowed, charallowed, passwordgen])

  return (
  <>

    <h1>
      Password Generator
    </h1>
    
    <div className='main-div'>

      <div className='password-area-and-copy-btn'>
        <input type='text' readOnly placeholder="password" value={password} className='pass-text' ref={password_reference}></input>

        <button onClick={copy_to_clipboard}>
          copy
        </button>

      </div>

      <div className='input-param'>
        <input type="range" min={8} max={50} value={length} onChange={(e)=>{
          setlength(e.target.value)
        }} />
        <label> Length:{ length }  </label>

        <br />
        

        <input type="checkbox" defaultChecked={numberallowed} onChange={()=>{
          setnumberallowed((prev) => !prev);

        }} />
        <label> numbers  </label>
        
        <input type="checkbox" defaultChecked={charallowed} onChange={()=>{
          setcharallowed((prev) => !prev);

        }} />
        <label> characters  </label>

      </div>

    </div>

  </>
  )
}

export default App
