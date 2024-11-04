import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  

  let [counter, setValue] = useState(0);


  const incre_value = () =>{
    if(counter < 10)
    {
      setValue(counter+1);
    }
    console.log(counter);
  }

  const decre_value = () =>{
    if(counter > 0)
    {
      setValue(counter-1);
    }
    console.log(counter);
  }


  return (
    <>
      
      <h1>
        This is a counter
      </h1>

      <h1> {counter} </h1>

      <p className='incre-para'>click to increment</p>
      <button onClick={incre_value}>increment</button>

      <br /> <br />

      <p className='decre-para'>click to decrement</p>
      <button onClick={decre_value}>decrement</button>
      
    </>
  )
}

export default App
