const mongoose = require('mongoose');
require('dotenv').config();

// const mongourl = 'mongodb://127.0.0.1:27017/myportfoliofeedback';
const mongoURL_cloud = process.env.mongoURL;

mongoose.connect(mongoURL_cloud);

const db = mongoose.connection;

db.addListener("connected", async ()=>{
    console.log("connected to database");
})

db.addListener("disconnected", async ()=>{
    console.log("disconnected from database");
})

db.addListener("error", async (error)=>{
    console.log("Error occurred while connecting to database: " + error.message);
})

module.exports = db;