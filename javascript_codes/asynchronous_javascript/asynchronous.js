

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

const id = setInterval(() => {
    console.log("inside setTimeout");
}, 1000);

for(let j = 0; j<5000; j++)
{
    console.log("just before end");
}

// clearTimeout(id);  // after running this the id belongs to which one setTimeout is prevented from execution

console.log("end of code");

