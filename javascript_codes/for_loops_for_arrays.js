console.log("this is about all for loops");

let array = [2, 24, 5, 6, 4, 12];
console.log(array);

console.log("normal for loop")
for (let i = 0; i < array.length; i++) {
  console.log(array[i]);
}

console.log("from concept");
let name = "sammed";
let arr = Array.from(name);  // this converts above string into array
console.log(arr);

console.log("for each loop")
array.forEach(element => {
    console.log(element *10);
});


console.log("for of loop")
for(let element of array)
{
    console.log(element);    // this directly prints values of arrays
}

console.log("for in loop")
for(let i in array)
{
    console.log(i)    // this prints array indices as we know for in loop provides keys, you can also prints arrays elements using keys as 'array[i]'
}