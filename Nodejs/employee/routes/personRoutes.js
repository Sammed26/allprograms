const express = require('express');
const router = express.Router();
const db = require('../db');
const personSchema = require('../models/personSchema');
const person = require('../models/personSchema');

router.use(express.json()); 
router.use(express.urlencoded({ extended: true }));


// add employee to database
router.post('/add', async (req, res)=>{
    try{
        const data = req.body;
        
        const person = new personSchema(data);
        const response = await person.save();

        console.log("data saved successfully");
        res.status(200).send("Data save successful");
    }
    catch(error)
    {
        console.log("Internal Server Error: "+error.message);
        res.status(500).send("Internal Server Error");
    }
});

router.get('/showemployees', async (req, res)=>{
    try
    {
        const response = await personSchema.find();
        res.status(200).json(response);
    }
    catch(error)
    {
        console.log("Ineternal Server Error: "+ error.message);
        res.status(500).send("Internal Server Error");
    }
});

router.delete('/delete/:id', async (req, res)=>{
    try
    {
        const id = String(req.params.id).slice(1)

        if(id == null)
        {
            res.status(404).send("Invalid id");
        }

        // const show = await personSchema.find({ id: id });
        // console.log(show);

        const query = { id: id };
        const response = await personSchema.deleteOne(query);

        if(response.deletedCount === 0)
        {
            res.status(404).send("Record Not Found");
        }
        else
        {
            res.status(200).send("Record Deleted Successfully");
    
        }
    }
    catch(error)
    {
        console.log("Internal Server Error: " + error.message);
        res.status(500).send();    
    }
});





module.exports = router;