// const headings = Array.from(document.querySelectorAll('h1'));

// console.log(headings);

// function onalltraversal(id){
//     clearInterval(id);
// }

// let count = 0;
// const id = setInterval((onalltraversal) => {
//     if(count < 8)
//     {
//         console.log(headings[count]);
//         headings[count].textContent = `Heading ${count+1}`;
//         count++;
//     }
//     else
//     {
//         clearInterval(id);
//     }
// }, 1500);





// using promises

const heading1 = document.querySelector(".heading1");
const heading2 = document.querySelector(".heading2");
const heading3 = document.querySelector(".heading3");
const heading4 = document.querySelector(".heading4");
const heading5 = document.querySelector(".heading5");
const heading6 = document.querySelector(".heading6");
const heading7 = document.querySelector(".heading7");
// const heading8 = document.querySelector(".heading8");

function changetext(heading, text, color, time){
    return new Promise((resolve, reject)=>{
        setTimeout(() => {
            if(heading)
            {
                heading.textContent = text;
                heading.style.color = color;
                resolve();
            }
            else
            {
                reject("not found");
            }
        }, time);
    })
}


changetext(heading1, "one", "blue", 1000)
    .then(()=>changetext(heading2, "two", "red", 1000))
    .then(()=>changetext(heading3, "three", "pink", 1000))
    .then(()=>changetext(heading4, "four", "golden", 1000))
    .then(()=>{
        return changetext(heading5, "five", "pink", 1000)})
    .then(()=>changetext(heading6, "six", "green", 1000))
    .then(()=>changetext(heading7, "seven", "yellow", 1000))
    .then(()=>changetext(heading8, "eight", "rgb(128,234, 123)", 1000))
    .catch((error)=>{
        alert(error);
    })

