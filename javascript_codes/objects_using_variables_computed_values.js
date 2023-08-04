console.log("this is about creating objects using variables");

const key1 = "objkey1";
const key2 = "objkey2";

const value1 = "objvalue1";
const value2 = "objvalue2";

const obj = {
    [key1] : value1,
    [key2] : value2
}
console.log(obj);

for(let key in obj){
    console.log(key + " = " + obj[key]);
}
