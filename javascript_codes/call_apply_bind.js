console.log("this is all about call, apply and bind method");

const product1 = {
    name : 'p1',
    id : 1,
    display : function print(price, owner){
        console.log(`product name = ${this.name}, product id = ${this.id}, product price = ${price}, product owner = ${owner}`);
    }
}
const product2 = {
    name : 'p2',
    id : 2,
}

// product1.display.call(product1);
//           // OR
// product1.display();

// call method
product1.display.call(product2, "2600", "sammed");

// apply method
product1.display.apply(product2, ["2600", "shree"]);

// bind method
const func = product1.display.bind(product2, "2600", "shree");
// bind returns a function by binding all parameters to original function and returned function is ready for execution
func();

