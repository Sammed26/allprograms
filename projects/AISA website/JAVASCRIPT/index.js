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


prev_btn.addEventListener("click", ()=>{
    count--;
    if(count == 0)
    {
        prev_btn.style.display = "none";
    }
    else
    {
        next_btn.style.display = "block";67
    }
    all_notice[count+1].style.display = "none";
    all_notice[count].style.display = "block";
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
})


