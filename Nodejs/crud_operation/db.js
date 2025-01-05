const mongoose = require('mongoose');

const mongourl = 'mongodb://127.0.0.1:27017/sammed';

mongoose.connect(mongourl, {
    useNewUrlParser: true,
    useUnifiedTopology: true
})

const db = mongoose.connection;

db.on('connnected', ()=>{
    console.log("connected to mongoDB server");
})

db.on('error', (error)=>{
    console.error("INTERNAL Server Error: ", error);
})

db.on('disconnected', ()=>{
    console.log("disconnected from mongoDB database server");
});

module.exports = db;