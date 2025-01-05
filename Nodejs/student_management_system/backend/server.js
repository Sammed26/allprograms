
const express = require('express');
const app = express();
const mongoose = require('mongoose');
const db = require('./db');
const bodyParser = require('body-parser');
const Student = require('./models/student');
const cors = require('cors');

app.use(cors());
app.use(bodyParser.json());

app.get('/', (req, res)=>{
    res.send("how can i help you?");
})

app.get('/show', async (req, res)=>{

    try{

        const students = await Student.find(); 
        res.status(200).json(students);

    }
    catch(error){
        res.status(500).send(error);
    }

})

app.post('/add', async (req, res)=>{

    try{
        const data = req.body;

        const student = new Student(data);
        const response = await student.save();
        
        console.log("data saved successfully");
        res.status(200).send(data);

    }
    catch(error){
        console.log("Internal Server Error: "+error);
        res.status(500).send("Internal Server Error: "+error);
    }

})

app.post('/delete', async (req, res)=>{

    try{
        const data = req.body;

        const result = db.collection("newstudents").deleteOne(data);

        if (result.deletedCount === 1) {
            res.status(200).send("Deletion successful");
        } else {
            res.status(404).send("No matching document found");
        }
        
        res.status(200).send("deletion successful");
    }
    catch(error){
        res.status(500).send("Internal Server Error: ", error);
    }

})

// app.post('/delete', async (req, res) => {
//     try {
//         const { rollno } = req.body; // Destructure rollno from req.body

//         if (!rollno) {
//             return res.status(400).send("Invalid request: Missing rollno");
//         }

//         const result = await db.collection("newstudents").deleteOne({ rollno });

//         if (result.deletedCount === 1) {
//             res.status(200).send("Deletion successful");
//         } else {
//             res.status(404).send("No matching document found");
//         }
//     } catch (error) {
//         console.error("Error deleting document:", error);
//         res.status(500).send(`Internal Server Error: ${error.message}`);
//     }
// });


app.post('/edit', async (req, res)=>{
    try{
        const data = req.body;

        const newdata = {$set : {name:data.name, rollno: data.rollno, grade: data.grade}};

        const result = db.collection("newstudents").updateOne(data, newdata);


        if((await result).matchedCount === 0)
        {
            console.log("No matching data found");
            res.status(404).send("No matchind data found: ");
        }
        else
        {
            console.log("data updated successfully");
            res.status(200).send("data updated successfully")
        }

    }
    catch(error){
        console.log("Failed to update data");
        res.status(500).send("Internal Server Error: "+error.message);
    }
})



const port = 3000;
app.listen(port, ()=>{
    console.log("listening at port : " + port);
})