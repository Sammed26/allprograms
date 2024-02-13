

// ++++++++++++++++++++++++++++ setTimeout() ++++++++++++++
// console.log("start of code");

// const id = setTimeout(() => {
//     for(let i = 0; i<5000; i++)
//     {
//         console.log("inside setTimeout");
//     }
// }, 1000);

// for(let j = 0; j<10000; j++)
// {
//     console.log("just before end");
// }

// clearTimeout(id);  // after running this the id belongs to which one setTimeout is prevented from execution

// console.log("end of code");





//  ++++++++++++++++++ setInterval() +++++++++++++++++++
console.log("start of code");

const heading = document.querySelector(".heading");
// const id = setInterval(() => {
//     heading.style.transition = "all 2s";
//     console.log("inside setTimeout");
//     heading.style.display = "block";
// }, 2000);



const btn = document.querySelector(".btn");

btn.addEventListener("click", ()=>{
    heading.style.display = "block";
})

for(let j = 0; j<5000; j++)
{
    console.log("just before end");
}

// clearTimeout(id);  // after running this the id belongs to which one setTimeout is prevented from execution

console.log("end of code");

