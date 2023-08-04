console.log("this is all about array destructuring");

const array = [2, 23, 26, 7];
let [val1, val2] = array;
console.log("value 1 is ", val1);
console.log("value 2 is ", val2);


const array1 = [2, 23, 26, 7];
let [val11, ,val13] = array1;  // one element is skipped
console.log("value 11 is ", val11);
console.log("value 13 is ", val13);


const array2 = [2, 23, 26, 7];
let [val21, ...newarray] = array2;
console.log("value 21 is ", val21);
console.log("newarray is ", newarray);