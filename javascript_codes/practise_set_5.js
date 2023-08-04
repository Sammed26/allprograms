console.log("this is practise set 5 on arrays");

// 1. create an array of numbers and take input from the user to sum numbers of this array
let array1 = [2, 23, 12, 54, 21, 26];

// for(let i in array1)
// {
//     let num1 = prompt("enter value that you want to add");
//     num1 = Number.parseInt(num1);
//     array1[i] += num1; 
// }
// console.log(array1);

// -------------------- or add numbers in array -----------------------
// let a = prompt("enter number that you want to add to array");
// a = Number.parseInt(a);
// array1.push(a);
// console.log(array1);


// 2. keep summing numbers to tha array in problem 1 until 0 is entered to sum to the array
// let array2 = [2, 23, 12, 54, 21, 26];

// for(let j in array2)
// {
//     let num2;
//     do{
//         num2 = prompt("enter number you are going to add");
//         num2 = Number.parseInt(num2);
//         array2[j] += num2;

//     }while(num2 != 0);
// }
// console.log(array2);


// ------------------------ or add to the array until 0 is added ------------------------------------
// let array = [2, 54, 26, 7];
// let num = prompt("enter number to add to the array");
// num = Number.parseInt(num);
// while(num != 0)
// {
//     array.push(num);
//     num = prompt("enter number to add to the array");
//     num = Number.parseInt(num);
// }
// console.log(array);


// 3. Filter for numbers divisible by 10 from given array
// let array3 = [2, 43, 30, 80, 34, 20, 10];
// let newarr3 = array3.filter(funct=(val) =>{
//     return val%10 == 0
// })
// console.log(newarr3);



// 4. create an array of square of given number
// let array4 = [2, 5, 4, 8, 3, 26];
// let newarr4 = array4.map(square_funct =(value)=>{
//     return value*value;
// } )
// console.log(newarr4);



// 5. use reduce to calculate factorial of a given number from tn array of first n natural numbers (n being tha number where factorial needs to be calculated)
let array5 = [1, 2, 3, 4, 5];
let factorail_value = array5.reduce(factorial_funct=(a, b) =>{
    return a*b;
})
console.log(factorail_value);

