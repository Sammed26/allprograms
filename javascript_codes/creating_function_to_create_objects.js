console.log("this is about creating objects by calling functions");

const product_methods = {
    display_name_id : function(){
        console.log(`name = ${this.name}, id = ${this.id}`);
    },
    display_price : function(){
        console.log(`price = ${this.price}`);
    }
};

function createObj(name, id, price)
{
    // const product = {};

    const product = Object.create(product_methods);
    // by creating like this we create a 'product' object and whose 'proto' is 'product_methods' object. means while calling any function method or accessing any key-value pair form 'product' object if it not found then cheak in it's proto i.e. 'product_methods'

    product.name = name;
    product.id = id;
    product.price = price;
    
    /*
    // product.display_name_id = function(){
    //     console.log(`name = ${this.name}, id = ${this.id}`);
    // }    
    // product.display_price = function(){
    //     console.log(`price = ${this.price}`);
    // }

    //  creating above function methods all time when object created is not good, it consumes lot of memory. Instead we can create reference to it and reduce size.
    //  for creating reference we first list all the methods in one other object and create reference.
    
    */

    
    // product.display_name_id = product_methods.display_name_id;
    // suppose we have too many function methods and writing like above commented line code is not easy all time or somoetimes you forgot to declare it so in this case '__proto__' or '[[prototype]]' is used and this is depected above while creating product object, see above

    product.display_price = product_methods.display_price;
    // this executes by reference

    return product;
}

const product1 = createObj('p1', 1, 26);
product1.display_name_id();  // here this is not found in 'product1' so it cheaked in it's proto i.e. in 'product_methods'

console.log(product1.__proto__);
