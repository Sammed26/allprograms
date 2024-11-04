import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'

import App from './App.jsx'
import Temp from './tempfile.jsx'

createRoot(document.getElementById('root')).render(
 
  <>
    
    <App />

    <Temp />
    
  </>
  
)
