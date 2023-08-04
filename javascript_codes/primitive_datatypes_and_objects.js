console.log("this is about primitive and non-primitive(objects) in javascript");


// =============== primitive datatypes =====================
console.log("primitive datatypes");
// n = null
// n = Number
// b = Boolean
// b = BigInt  (big integers)
// s = string
// s = Symbol  (ex. let s = Symbol("this is symbol"))
// u = undefined

let a = null;
let b = 26;
let c = true;
let d = 76576;
let e = "sammed";
let f = Symbol("this is symbol")
let g = undefined; // or only 'let g'

console.log(a, b, c, d, e, f, g);



// ================== objects or non-primitive ==============
console.log("non-primitive or objects");

const list = {
    "sammed" : 26,
    "sk" : undefined,
    "ganesh" : true,
    "mangesh" : null,
    "sam" : "how are you?",
    "sym" : Symbol("#")
}
// you can access above object like
console.log(list["sammed"], list["sk"],  list["ganesh"], list["mangesh"],  list["sam"],  list["sym"]);


