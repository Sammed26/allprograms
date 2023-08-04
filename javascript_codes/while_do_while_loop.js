console.log("this is all about while and do-while loops in javascript");

// while loop
let val;
val = prompt("enter the value");
val = parseInt(val);
let i = 1; 
while(i <= val)
{
    console.log(i);
    i++;
}


// do-while loop
i = 1;
val = prompt("enter the value");
val = parseInt(val);
do{
    console.log(i);
    i++;
}while(i<val);