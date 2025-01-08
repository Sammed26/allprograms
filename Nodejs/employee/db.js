const mongoose = require('mongoose');

const mongourl = "mongodb://127.0.0.1:27017/employee";

mongoose.connect(mongourl);

const db = mongoose.connection;

db.addListener('connected', ()=>{
    console.log("connected to database");
})

db.addListener('disconnected', ()=>{
    console.log("disconnected from database");
})

db.addListener('error', (error)=>{
    console.log("error occurred while connecting to database: "+ error);
})

module.exports = db;
