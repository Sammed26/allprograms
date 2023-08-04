console.log("this is all about object destructuring");

const person1 = {
    name1 : "sammed",
    age1 :20,
}

const person2 = {
    name2 : "shree",
    age2 :14,
}

const newobj = {...person1, ...person2, gender:"male"};

console.log(newobj);
let {name1:var1, age1:var2} = person1;
console.log("value of var1 is ", var1);
console.log("value of var2 is ", var2);

let {name1, age1} = person1;
console.log("value of name1 is ", name1);
console.log("value of age1 is ", age1);


