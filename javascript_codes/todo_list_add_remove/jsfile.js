const add_btn = document.querySelector("#add-task .task-add-btn");
// console.log(add_btn.textContent);

const task_ul = document.querySelector(".task-ul ul");
const task_add_input = document.querySelector(".task-add-input input");
let task_input_text = "";
task_add_input.addEventListener("keypress", (e)=>{
    task_input_text += e.key;
    // console.log(e);
    
})

add_btn.addEventListener("click", function(e){
    const new_ele = document.createElement("li");
    new_ele.textContent = task_input_text;
    task_ul.appendChild(new_ele);
    new_ele.className = "tasks";

    const new_ele_inside_btn = document.createElement("a");    
    new_ele_inside_btn.textContent = "remove";
    new_ele_inside_btn.className = "btn task-remove-btn";
    new_ele.appendChild(new_ele_inside_btn);
})


