const express = require('express');
const router = express.Router();
const db = require('../db');
const feedbackSchema = require('../models/feedback');
const { urlencoded } = require('body-parser');

router.use(express.json());
router.use(express.urlencoded({
    extended: true
}));


// add feedback to database
router.post('/add', async (req, res)=>{
    try{

        const data = req.body;
        const feedbackdata = new feedbackSchema(data);

        const response = await feedbackdata.save();

        console.log("data saved successfully");
        res.status(200).send("1");
    }
    catch(error)
    {
        console.log("Internal Server Error: " + error.message);
        res.status(500).send("Internal Server Error: " + error.message);
    }
})


module.exports = router;
