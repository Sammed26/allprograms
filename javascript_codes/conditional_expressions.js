console.log("this is about if, if=else, if-else ladder, switch statements and ternary operator")

let a = prompt("Hi, enter your age");   // this is build in function which here executes 'Hi, enter your age' and takes input whatever we input and store it in 'a' as a string 

a = Number.parseInt(a);     // this function typecasts 'a' value to integer
// if statement
if(a>0 && a<120)
{
    alert("entered age is valid")  // alert() function simply outputs what is written on screen
}

// if-else
if(a>0 && a<=18)
{
    alert("you can't vote");
}
else
{
    alert("you van vote");
}

// if-else ladder
if(a>0 && a<13)
{

    console.log("you are a kid");
}
else if(a>=13 && a<=19)
{
    console.log("you are a teenager now");
}
else
{
    console.log("you are above 18 and you can vote");
}


// switch case statements
let ageinput = prompt("hi enter your age category, below 18 = 1, 18 to 70 = 2, above 70 = 3");
ageinput = Number.parseInt(ageinput);
switch(ageinput)
{
    case 1:
        alert("as you are below 18 you can't drive");
        break;
    
    case 2:
        alert("you can drive")
        break;

    case 3:
        alert("you are too old so sorry to say you can't drive");
        break;

    default:
        alert("make proper choice");
        break;
}



// ternary operator
let marks;
marks = prompt("enter your marks out of 100");
marks = Number.parseInt(marks);
console.log("you ",(marks<35? "fail": "passed"));

