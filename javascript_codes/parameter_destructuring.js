console.log("this is about destructuring object or anything while passing it as a parameter to function");

const obj = {
    name: "sammed",
    age: 20,
    income: "1.4 trillian doller",
}

// const display = (object1) =>{
//     console.log(object1.name);
//     console.log(object1.age);
//     console.log(object1.income);
// }

// ++++++ instead of passing direct object you can also destructure is also

const display = function({name:nam, age, income}){
    console.log(nam);
    console.log(age);
    console.log(income);
}


display(obj);
