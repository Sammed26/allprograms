
// ===================== sidebar scrolling 





// =================== home styling ==============

const home = document.querySelector(".container .main-content .home");
// console.log(home);

const images = ["home1.jpg", "home2.jpg"];

const intros = [document.querySelector(".first-intro"), document.querySelector(".second-intro")];

let counter = 1;
let prev = 0;
setTimeout(() => {
    intros[0].style.display = "none";
}, 3000);
function changeBackgroundText()
{
    intros[prev].style.display = "none";
    home.style.backgroundImage = `url('./img/${images[counter]}')`;
    
    intros[counter].style.display = "block";
    prev = counter;
    counter = (counter + 1)% images.length;
    

}
setInterval(changeBackgroundText, 5000);





// ================ eduacation section javascript ==================
let current_visibility = 0;

const info1_btn = document.getElementById("info1-btn");
// console.log(info1_btn);
const info1 = document.getElementById("info1");
// console.log(info1);
const info1_btn_sign = document.querySelector(".sign1");
info1_btn.addEventListener("click", ()=>{
    if(current_visibility === 0)
    {
        info1.style.display = "block";
        info1_btn_sign.textContent = "-";
        current_visibility = 1;
        info1_btn.style.background = "rgb(156, 93, 215)";
        info1_btn.style.color = "white";
    }
    else{
        info1.style.display = "none";
        info1_btn_sign.textContent = "+";
        current_visibility = 0;
        info1_btn.style.background = "rgb(231, 229, 227)";
        info1_btn.style.color = "black";
    }
})
const btn1_text = document.querySelector(".degree-title1");
info1_btn.addEventListener("mouseover", ()=>{
    info1_btn.style.width = "110%";
    info1_btn.style.height = "7rem";
    info1_btn_sign.style.fontSize = "5rem";
    btn1_text.style.fontSize = "2rem";

})
info1_btn.addEventListener("mouseout", ()=>{
    info1_btn.style.width = "100%";
    info1_btn.style.height = "6rem";
    info1_btn_sign.style.fontSize = "3rem";
    btn1_text.style.fontSize = "1.5rem";

})


const info2_btn = document.getElementById("info2-btn");
const info2 = document.getElementById("info2");
const info2_btn_sign = document.querySelector(".sign2");
info2_btn.addEventListener("click", ()=>{
    if(current_visibility === 0)
    {
        info2.style.display = "block";
        info2_btn_sign.textContent = "-";
        current_visibility = 1;
        info2_btn.style.background = "rgb(156, 93, 215)";
        info2_btn.style.color = "white";
    }
    else{
        info2.style.display = "none";
        info2_btn_sign.textContent = "+";
        current_visibility = 0;
        info2_btn.style.background = "rgb(231, 229, 227)";
        info2_btn.style.color = "black";
    }
})
const btn2_text = document.querySelector(".degree-title2");
info2_btn.addEventListener("mouseover", ()=>{
    info2_btn.style.width = "110%";
    info2_btn.style.height = "7rem";
    info2_btn_sign.style.fontSize = "5rem";
    btn2_text.style.fontSize = "2rem";
})
info2_btn.addEventListener("mouseout", ()=>{
    info2_btn.style.width = "100%";
    info2_btn.style.height = "6rem";
    info2_btn_sign.style.fontSize = "3rem";
    btn2_text.style.fontSize = "1.5rem";
})


const info3_btn = document.getElementById("info3-btn");
const info3 = document.getElementById("info3");
const info3_btn_sign = document.querySelector(".sign3");
info3_btn.addEventListener("click", ()=>{
    if(current_visibility === 0)
    {
        info3.style.display = "block";
        info3_btn_sign.textContent = "-";
        current_visibility = 1;
        info3_btn.style.background = "rgb(156, 93, 215)";
        info3_btn.style.color = "white";
    }
    else{
        info3.style.display = "none";
        info3_btn_sign.textContent = "+";
        current_visibility = 0;
        info3_btn.style.background = "rgb(231, 229, 227)";
        info3_btn.style.color = "black";
    }
})
const btn3_text = document.querySelector(".degree-title3");
info3_btn.addEventListener("mouseover", ()=>{
    info3_btn.style.width = "110%";
    info3_btn.style.height = "7rem";
    info3_btn_sign.style.fontSize = "5rem";
    btn3_text.style.fontSize = "2rem";

})
info3_btn.addEventListener("mouseout", ()=>{
    info3_btn.style.width = "100%";
    info3_btn.style.height = "6rem";
    info3_btn_sign.style.fontSize = "3rem";
    btn3_text.style.fontSize = "1.5rem";
})


const info4_btn = document.getElementById("info4-btn");
const info4 = document.getElementById("info4");
const info4_btn_sign = document.querySelector(".sign4");
info4_btn.addEventListener("click", ()=>{
    if(current_visibility === 0)
    {
        info4.style.display = "block";
        info4_btn_sign.textContent = "-";
        current_visibility = 1;
        info4_btn.style.background = "rgb(156, 93, 215)";
        info4_btn.style.color = "white";
    }
    else{
        info4.style.display = "none";
        info4_btn_sign.textContent = "+";
        current_visibility = 0;
        info4_btn.style.background = "rgb(231, 229, 227)";
        info4_btn.style.color = "black";
        
    }
})
const btn4_text = document.querySelector(".degree-title4");
info4_btn.addEventListener("mouseover", ()=>{
    info4_btn.style.width = "110%";
    info4_btn.style.height = "7rem";
    info4_btn_sign.style.fontSize = "5rem";
    btn4_text.style.fontSize = "2rem";

})
info4_btn.addEventListener("mouseout", ()=>{
    info4_btn.style.width = "100%";
    info4_btn.style.height = "6rem";
    info4_btn_sign.style.fontSize = "3rem";
    btn4_text.style.fontSize = "1.5rem";
})






// ===================== for dark mode =================

const body = document.body;
const toggle_btn = document.querySelector(".toggle-theme");
toggle_btn.addEventListener("click", ()=>{
    if(body.classList.contains("dark-mode")){
        body.classList.remove("dark-mode");
        toggle_btn.textContent = "Dark Mode";
    }
    else{
        body.classList.add("dark-mode");
        toggle_btn.textContent = "Light Mode";
    }
})



