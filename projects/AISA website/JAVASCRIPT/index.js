
// ==================== notice board ====================

const all_notice = [document.querySelector(".notice1"), document.querySelector(".notice2"), document.querySelector(".notice3"), document.querySelector(".notice4"), document.querySelector(".notice5")];

// for (let index = 0; index < all_notice.length; index++) {
//     const element = all_notice[index];

//     element.style.visibility = "visible";

//     setTimeout(2000);

//     element.style.visibility = "hidden";

// }

// document.body.style.display = "block";





let no_of_btns = 5;
let count = 0;   // this indicates how many times left button or right button is pressed
                // ex. count = 1, left btn = not visible right btn visible

const prev_btn = document.querySelector(".prev_btn");
const next_btn = document.querySelector(".next_btn");

prev_btn.style.display = "none";

// ------------ notice board below circles -----------

const circles = [document.querySelector(".notice-board-circles .button1"), document.querySelector(".notice-board-circles .button2"), document.querySelector(".notice-board-circles .button3"), document.querySelector(".notice-board-circles .button4"), document.querySelector(".notice-board-circles .button5")];
console.log(circles);

circles[0].style.background = "rgba(0, 0, 0, 0.7)";

prev_btn.addEventListener("click", ()=>{
    count--;
    if(count == 0)
    {
        prev_btn.style.display = "none";
    }
    else
    {
        next_btn.style.display = "block";
    }
    all_notice[count+1].style.display = "none";
    all_notice[count].style.display = "block";

    circles[count+1].style.background = "rgba(0, 0, 0, 0.2)";
    circles[count].style.background = "rgba(0, 0, 0, 0.7)";
})




next_btn.addEventListener("click", ()=>{
    count++;
    if(count == (no_of_btns-1))
    {
        next_btn.style.display = "none";
    }
    else
    {
        prev_btn.style.display = "block";
    }
    all_notice[count-1].style.display = "none";
    all_notice[count].style.display = "block";

    circles[count-1].style.background = "rgba(0, 0, 0, 0.2)";
    circles[count].style.background = "rgba(0, 0, 0, 0.7)";
})







