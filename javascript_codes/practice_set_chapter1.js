console.log("this is chapter 1 practice set")

let string = "sammed"
console.log(string)

string = string + 26;
console.log(string)

console.log(typeof string);

// create an object and and later try to hold that object other number or anything or point to other object

const obj = {
    name : "sammed",
    age : "20"
}
console.log(obj)
console.log(obj['name'])
console.log(obj.name);

// can you point to another object of same type
const obj1 = {
    name : "shree",
    age : "14"
}

console.log(obj1)
// // obj = obj1   // this will throw an error as you can't assign other type
// console.log(obj)


// now can you change the data into objects or add some other data?
// -> yes you can change data within it and add another data also
console.log(obj.name);
obj.name = "sk";
obj.yearofbirth = 2005;
console.log(obj);

