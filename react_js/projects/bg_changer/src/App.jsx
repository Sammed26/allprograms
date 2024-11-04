import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Background_box from './components/background_box';


function App() {

  let [[r, g, b], update_value] = useState([0, 0, 0]);

  const change_color = ()=>{
    r = Math.floor(Math.random() * 256);
    g = Math.floor(Math.random() * 256);
    b = Math.floor(Math.random() * 256);  

    update_value([r, g, b]);

  }



  return (
    <>
      <div className='box' style={{backgroundColor: `rgb(${r}, ${g}, ${b})`, padding: "8rem" }}>
        <h1 style={{ color: `rgb(${256-r}, ${256-g}, ${256-b})`}}>
          Background Changer
        </h1>

        <p  style={{ color: `rgb(${256-r}, ${256-g}, ${256-b})`}}>
          'rgb = {r}, {g}, {b}'
        </p>

        <button onClick={change_color}>
          click to change color
        </button>
        
      </div>

    </>
  )
}

export default App
