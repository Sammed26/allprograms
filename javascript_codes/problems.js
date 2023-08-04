console.log("this is a sample problem solutions");

const marks = {
    sammed : 99,
    shree : 100, 
    sk : 45,
    sam : 80
}

// printing marks using regular for loop
for(let i = 0; i<Object.keys(marks).length; i++)
{
    console.log("marks of " + Object.keys(marks)[i] + " are " + marks[Object.keys(marks)[i]])
}

// printing marks using for in loop
for(let key in marks)
{
    console.log("marks of " + key + " are " + marks[key]);
}


// wap to take user input which is valid and till getting valid input continue to take input and show like try again

let input = 26;
let temp = prompt("enter input");

while(input != temp)
{
    console.log("try again")
    temp = prompt("enter input");
}
console.log("you entered correct input");

