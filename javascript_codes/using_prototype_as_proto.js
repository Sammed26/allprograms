console.log("this is about using prototype of it's own function as proto");

function createProduct(name, id, price)
{
    const product = Object.create(createProduct.prototype);
    product.name = name;
    product.id = id;
    product.price = price;
    return product;
}
createProduct.prototype.display_name_id = function(){
    console.log(`product name = ${this.name}, product id = ${this.id}`);
}
createProduct.prototype.display_price = function(){
    console.log(`product price = ${this.price}`);
}

const product1 = createProduct("p1", 1, 2600);
product1.display_name_id();
product1.display_price();
