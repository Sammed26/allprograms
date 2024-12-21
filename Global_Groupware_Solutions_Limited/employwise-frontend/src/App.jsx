import React from "react";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import Login from "./components/Login.jsx";
import UsersList from "./components/UsersList.jsx";
import UserEditForm from "./components/UserEditForm.jsx";

function App() {
  return (
    <Router>
      <Routes>
        <Route path="/" element={<Login />} />
        <Route path="/users" element={<UsersList />} />
        <Route path="/edit/:id" element={<UserEditForm />} />
      </Routes>
    </Router>
  );
}

export default App;
