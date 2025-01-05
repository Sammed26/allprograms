const mongoose = require('mongoose');

const carSchema = new mongoose.Schema({
    name: {
        type: String,
        required: true,
        unique: true
    },
    modelyear: Number,
    color:{
        type: String, 
        required: true
    }
})

const car = mongoose.model('carmodel', carSchema);
module.exports = car;