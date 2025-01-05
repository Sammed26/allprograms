const express = require('express');
const app = express();
const db = require('./db');
const Car = require('./models/cars');
const bodyParser = require('body-parser');

app.use(bodyParser.json());

app.get('/', (req, res)=>{
    res.send("Hi, there how can i help you");
})

app.get('/showdata', (req, res)=>{
    res.send("Showing data ........");
})

app.post('/car', async (req, res)=>{
    try{
        const data = req.body;

        const newcar = new Car(data);

        const saveddata = await newcar.save();
        console.log("data saved successfully");
        res.status(200).send("Data saved successfully");

    }catch(error){
        console.log("error occurred while inserting data");
        res.status(500).send("Internal Server Error: ", error);
    }
});

app.get('/showcars', async (req, res)=>{
    try{
        const data = await Car.find();
        console.log("data shown successfully");
        res.status(200).json(data);
    }
    catch(error){
        console.log("failed", error.message);
        res.status(500).send("Internal Server Error", error.message);
    }
})


const port = 3000;
app.listen(port, ()=>{
    console.log("server is running on port: " + port);
})