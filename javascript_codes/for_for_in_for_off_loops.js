console.log("this is about for, for-in and for-off loops in javascript");

// for loop
for(let i =0; i<10; i++)
{
    console.log(i);
}
// console.log("value of i is" + i);  // this throws an error because 'let i' declared in above for loop is locally scoped. If we use 'var i' then not gives error but use of var is not advised


// for-in loop
let obj={
    sammed : 90,
    sk : 84,
    shree : 93, 
    sam : 95
}
// for-in loop only prints the keys of objects, later you can access their values also
for(let a in obj)
{
    console.log(a);
    console.log("marks of " + a + " are " + obj[a]);
}


// for-of loop
// if object is iterable then this is work with their values, and also works with strings

for(let b of "sammed")
{
    console.log(b);
}

