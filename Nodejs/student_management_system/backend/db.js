const mongoose = require('mongoose');

const mongourl = 'mongodb://127.0.0.1:27017/studentdata';

mongoose.connect(mongourl);

const db = mongoose.connection;

db.on('connected', ()=>{
   
    console.log("connected to database");
})

db.on('disconnected', ()=>{
    
    console.log("disconnected from database");
})

db.on('error', ()=>{
    
    console.log("error occurred while connection with database");
})

module.exports = db;