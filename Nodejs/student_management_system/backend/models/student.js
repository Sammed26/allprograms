const mongoose = require('mongoose');

const StudentSchema = new mongoose.Schema({
    name:{
        type: String,
        required: true
    },
    rollno:{
        type: Number,
        required: true
    },
    grade:{
        type: Number,
        required: true,
        default: 0
    }
});

const Student = mongoose.model('NewStudent', StudentSchema);
module.exports = Student;