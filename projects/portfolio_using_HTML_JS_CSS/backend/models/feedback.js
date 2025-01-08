const mongoose = require('mongoose');

const feedbackSchema = mongoose.Schema({
    name:{
        type: String,
        required: true
    },
    email:{
        type:String,
        required: true
    },
    response:{
        type:String,
        required: true
    }
});

const feedback = mongoose.model("feedback", feedbackSchema);

module.exports = feedback;