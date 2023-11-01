let whole_equation = 0;
let counter = 1;
let operator_comes = 0;
let final_ans;

const buttons = document.querySelectorAll(".btn");
const screen_text = document.querySelector('.screen-text');


let prev_operation;
buttons.forEach(btn => {
    
    btn.addEventListener("click", ()=>{
        
        if(counter == 1)
        {
            whole_equation = btn.innerText;
            counter++;
        }
        else
        {
            whole_equation += btn.innerText;
        }
        screen_text.innerText = whole_equation;
    })
    
});


const clear = document.querySelector(".clear-btn");
clear.addEventListener("click", ()=>{
    whole_equation = 0;
    counter = 1;
    final_ans = 0;
    screen_text.innerText = 0;
})



const ans = document.querySelector(".ans");

ans.addEventListener("click", ()=>{
    
    let first_operand
    for(let i = 0; i<whole_equation.length; i++)
    {
        // console.log("hi");

    }

})




