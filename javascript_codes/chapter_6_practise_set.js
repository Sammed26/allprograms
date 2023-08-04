// 1. write a program using prompt function to take input of age as a value from the user and use alert to tell him if he can drive

let age1 = prompt("enter your age");
age1 = Number.parseInt(age1);
if(age1<18)
{
    alert("you can drive, illegal wherever there is police otherwise habibi everything is legal");
}
else{
    alert("Habibi you can drive")
}


// 2. in Q.1 use confirm ot ask the user if he wants prompt again

let age2 = prompt("enter your age");
age2 = Number.parseInt(age2);
let confirm2 = confirm("is age is correct or are you want to enter age again?");
console.log(confirm2);
if(confirm2)
{
    age2 = prompt("enter your age");
    age2 = Number.parseInt(age2);
}
if(age2<18)
{
    alert("you can drive, illegal wherever there is police otherwise habibi everything is legal");
}
else{
    alert("Habibi you can drive")
}



// 3. in the previous question, use console.error to log the error if the age entered is negative

let age3 = prompt("enter your age");
age3 = Number.parseInt(age3);
if(age3<0)
{
    console.error("error \"2626.negative-age-are-you-mad\" occurred");
}
let confirm3 = confirm("is age is correct or are you want to enter age again?");
console.log(confirm3);
if((confirm3) || (age3<0))
{
    age3 = prompt("enter your age");
    age3 = Number.parseInt(age3);
}
if(age3<18)
{
    alert("you can drive, illegal wherever there is police otherwise habibi everything is legal");
}
else{
    alert("Habibi you can drive")
}


// 4. write a program to change the url to google.com(redirection) if enters number greater than 4

let num = prompt("enter number");
num = Number.parseInt(num);
if(num > 4)
{
    location.href = "https://google.com"
}



// 5. change the background of the page to yellow based on user input through prompt

let color = prompt("enter the color")
document.body.style.background = color;

