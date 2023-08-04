console.log("this is regarding const, let and var");

var sam = 26;
console.log(sam);
var sam = "sammed";   // this is allowed in var type only. you can redeclare 
console.log(sam);

let v = 2003;
console.log("printing value of v", v);
v = 45;
console.log("printing value of v", v);

//let v = "text";    //throws an error. this is not allowed. you can redeclare let variable only in another block scope or any other scope. you can't redeclare same let variable twice in same scope


const s = 11;
console.log("printing value of constant variable s ", s);
//const m;  m = 34;  // this is not allowed because const variables are need to declare at the time of declaration only and you can't update it also
