const express = require('express');
const app = express();
const cors = require('cors');

require('dotenv').config();


app.use(cors());
app.use(express.json()); 
app.use(express.urlencoded({ extended: true }));


const PORT = process.env.PORT;

app.get('/', async (req, res)=>{
    res.status(200).send("Welcome to my portfolio website");
})

const feedbackRoutes = require('./routes/feedbackroute');
app.use(feedbackRoutes);


app.listen(PORT, ()=>{
    console.log("Server is listening at port : " + PORT);
})