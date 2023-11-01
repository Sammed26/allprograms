const button = document.querySelector("button");
const body = document.body;
const current_color = document.querySelector(".current-color");
function randomColorGenerate(){
    const red = Math.floor(Math.random()*256);
    const green = Math.floor(Math.random()*256);
    const blue = Math.floor(Math.random()*256);
    return `rgb(${red}, ${green}, ${blue})`;
}

button.addEventListener("click", ()=>{
    const randomColor = randomColorGenerate();
    // console.log(randomColor);
    body.style.background = randomColor;
    current_color.textContent = randomColor;
})

// keypress event
const keypress_event_output = document.querySelector(".main-output");
// console.log(keypress_event_output);
button.addEventListener("keypress", (e)=>{
    keypress_event_output.textContent += e.key;
     console.log(e.key);
})

// mouse hover event
const h1 = document.querySelector("h1");
h1.addEventListener("mouseover", ()=>{
    h1.style.fontSize = "3rem";
})

// mouse leave event
h1.addEventListener("mouseleave", ()=>{
    h1.style.fontSize = ""
})
