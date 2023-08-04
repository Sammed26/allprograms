console.log("this is about class");

// till now we are defining proto and all that things manually but by using class you just make it very easy

class CreateProduct{
    constructor(name, id)
    {
        this.name = name;
        this.id = id;
    }
    display_name(){
        console.log(`product name = ${this.name}`);
    }
    display_id()
    {
        console.log(`product id = ${this.id}`);
    }
}

const product1 = new CreateProduct("p1", 1);
const product2 = new CreateProduct("p2", 2);

console.log(product1);
console.log(product2);

