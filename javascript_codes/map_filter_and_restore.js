console.log("this is about map, filter and restore")

let array = [24, 5, 34, 87, 9];

// console.log("---------------------------- map -------------------------")
// let newarr = array.map(funct = (value, index, array) =>{
//     console.log(value, index, array);
//     return value *value;
// })
// console.log(newarr)

// //                OR

// mapfunct = (value, index, array) =>{
//     return value * value;
// }
// let newarr1 = array.map(mapfunct);
// console.log(newarr1);
//map is just like the forEach loop but this creates new array by returning desired values but forEach loop not



// console.log("----------------- filter ------------------");
// let newarr2 = array.filter(funct = (a) =>{
//     return a<20;
// })
// console.log(newarr2);



console.log("--------------------- restore ---------------------")
let num = array.reduce((a, b) =>{
    return a-b;
})
console.log(num);
// reduce function takes arguments from array and do specified opearation and then carry out operation using result and other values in array

