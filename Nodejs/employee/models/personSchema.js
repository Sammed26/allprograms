const mongoose = require('mongoose');

const newPerson = new mongoose.Schema({
    id:{
        type:String,
        required: true,
        unique: true
    },
    name:{
        type:String,
        required: true,
    },
    phoneno:{
        type: Number,
        required: true,
    },
    worktype:{
        type: String,
        enum: ["hr", "manager", "tech"],
        required: true
    },

})

const person = mongoose.model('person', newPerson);
module.exports = person;