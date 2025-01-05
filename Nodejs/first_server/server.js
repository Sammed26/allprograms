const express = require('express');
const app = express();

app.get('/', function(req, res){
    res.send("this is initial page, here server is only alive");
})

app.get("/home", (req, res)=>{
    res.send("here is the home page, welcome");
})

app.get('/about', (req, res)=>{
    res.send("here is the about page");
})





app.listen(3001, ()=>{
    console.log("hi there this is my first server and is running")
});


