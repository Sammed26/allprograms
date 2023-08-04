console.log("this is about find method in array");

const product = [
    {productId: 1, productPrice: 1200, productName: "p1"},
    {productId: 2, productPrice: 200, productName: "p2"},
    {productId: 3, productPrice: 300, productName: "p3"},
    {productId: 4, productPrice: 200, productName: "p4"},
    {productId: 5, productPrice: 900, productName: "p5"},
    {productId: 6, productPrice: 1250, productName: "p6"},
]

const ans = product.find((p) => {
    return p.productId === 4;
});

console.log(ans);
