console.log("this is all about sorting");

// this method mutates original array
// let array = [23, 34, 26, 7, 6, 12];

// array.sort();  // this sorting is based on considering numbers as string, and sorts alphabetically as each digit. 2 comes before 3 likewise
// console.log(array);

// to sort in ascending or decending order
// array.sort((a, b) =>{
//     return a-b;   // this sorts in ascending order
// });
// console.log(array);


// to sort strings we can directly use sort()

// const arr = ["shree", "sammed", "sam", "sk"];
// arr.sort();
// console.log(arr);



const product_list = [
    {productName: "p1", productPrice: 12, productId: 1},
    {productName: "p2", productPrice: 2500, productId: 2},
    {productName: "p3", productPrice: 800, productId: 3},
    {productName: "p4", productPrice: 110, productId: 4},
    {productName: "p5", productPrice: 92, productId: 5},
    {productName: "p6", productPrice: 10, productId: 6},
    {productName: "p7", productPrice: 252, productId: 7},
]

let lowtohigh = product_list.slice(0).sort((a, b) =>{
    return a.productPrice - b.productPrice;
});
// slice method is used because we not want to change original array instead we first make copy of it and store it in sample array and that sample array is used.
console.log(lowtohigh);
