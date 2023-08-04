console.log("this is all about splice() method in array");

// syntax
// array.splice(startIndex, how Much Elements To Delete, What To Replace in deleted elements);
// this modifies the original array
// you can use this method to delete, insert or for both operations 

const array = [23, 26, 7, 34, 21, 9, 10];
const deletedItem = array.splice(3, 1);
console.log(`deleted item is ${deletedItem}`);
console.log(array);

array.splice(3, 0, -26);
console.log(array);

const deletedItem2 = array.splice(3, 1, -999);
console.log(`deleted item is ${deletedItem2}`);
console.log(array);
