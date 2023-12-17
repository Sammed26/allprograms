
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





