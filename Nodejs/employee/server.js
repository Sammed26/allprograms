const express = require('express');
const app = express();

app.use(express.json()); 
app.use(express.urlencoded({ extended: true }));

const port = 3000;

app.get('/', (req, res)=>{
    res.status(200).send("Welcome to employee app");
});


const personRoutes = require('./routes/personRoutes');
app.use('/person', personRoutes);



app.listen({port}, ()=>{
    console.log(`server is listening at port: ${port}`);
});