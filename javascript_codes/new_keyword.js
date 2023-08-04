console.log("this is about new keyword");

// 'new' keyword 1. create empty object  2. and then as specified by function present after, assigns the values 3. then automatically creates proto link to the function's proto

function createProductObj(name, id)
{
    this.name = name;
    this.id = id;
}

createProductObj.prototype.display_name = function(){
    console.log(`product name = ${this.name}`);
}

const product1 = new createProductObj("sammed", 26);
console.log(product1);

product1.display_name();
