console.log("this is about some() method in arrays");

const product = [
    {productId: 1, productName: "p1", price: 1200},
    {productId: 2, productName: "p2", price: 200},
    {productId: 3, productName: "p3", price: 10},
    {productId: 4, productName: "p4", price: 100},
    {productId: 5, productName: "p5", price: 800},
]

// some() method returns true whenever there is at least one element is array which satisfies the condition else returns false

const ans = product.some((p) => p.price > 1000);

console.log(ans);