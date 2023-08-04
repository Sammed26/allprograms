console.log("this is all about objects in javascript");

const person = {
    name: "sammed",
    age: 20
}
console.log(person);

person.gender = "male";  // adding new key value pair
console.log(person);

// printing using for in loop
for(let key in person)
{
    console.log(key + " = " + person[key]);
}

// printing using for of loop
for(let key of Object.keys(person))
{
    console.log(key + " : " + person[key]);
}

