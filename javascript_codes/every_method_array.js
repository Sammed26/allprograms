console.log("this is about every() method in arrays");

const product = [
    {productId: 1, productName: "p1", price: 2000},
    {productId: 2, productName: "p2", price: 2000},
    {productId: 3, productName: "p3", price: 2000},
    {productId: 4, productName: "p4", price: 2000},
    {productId: 5, productName: "p5", price: 2000},
    {productId: 6, productName: "p6", price: 2000},
    {productId: 7, productName: "p7", price: 2000},
];


// every method returns true if and only if all the element in array satisfying the condition, else returns false

const ans = product.every((p) =>{
    return p.price <10000;
});

console.log(ans);
