import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Card from './components/Card.jsx';


function App() {

  const obj = {
    username:'shree',
    occupation:'student',
    btn_text:'click here'
  }

  const arr = [1, 2, 3, 4];

  return (
    
    <>
      <h1>
        This are reused components
      </h1>

      <Card username={"sammed"} occupation={"engineer"} btn_text={"click here"} />
      <Card />

    </>
  )
}

export default App
