console.log("this is all about 'this' keyword in javascript");

// this keyword points to current object 

function display() {
    console.log(`product id = ${this.id}, product price : ${this.price}, product name = ${this.name}`);
}

const product = {
    id : 1,
    name : 'p1',
    price : 120,
    display_func : display,
}

product.display_func();
