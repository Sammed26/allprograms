console.log("this is about prototype");

// in js function is function as well as object and in that object we can add key-value pairs. 
// with function we get free space to add key-value pairs and that is called prototype
// only function has prototype

function hello()
{
    console.log("in the function hello()");
}
// cheak whether prototype or not
if(hello.prototype)
{
    console.log("prototype is present");
}
else
{
    console.log("prototype is not present");
}

// at first prototype is empty object to cheak print it
console.log(hello.prototype);

// adding key-value pairs to prototype(object) of function hello()
hello.prototype.age = 20;
console.log(hello.prototype);
// as it is object you can also add function as key-value
hello.prototype.func_inside_prototype = function(){
    console.log("this is the function inside prototype object");
}
hello.prototype.func_inside_prototype();
