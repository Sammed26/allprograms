const formtodo = document.querySelector(".task-add-input");
const todoTextInput = document.querySelector(".task-add-input input[type='text']");
const todo_list = document.querySelector(".todo-list");

formtodo.addEventListener("submit", (e)=>{
    e.preventDefault();   // this prevents from refresh and our entered data remains
    const inputed_text = todoTextInput.value;
    // console.log(inputed_text);
    todoTextInput.value = "";

    const newli = document.createElement("li");
    const newLiInnerHtml = `<span class="li-text">${inputed_text}</span>
    <div class="todo-buttons">
        <button class="todo-btn done">Done</button>
        <button class="todo-btn remove">Remove</button>
    </div>`
    newli.innerHTML = newLiInnerHtml;
    todo_list.append(newli);
})

todo_list.addEventListener("click", function(e){
    // console.log(e.target);
    if(e.target.classList.contains("done"))
    {
        const lispan = e.target.parentNode.previousElementSibling;
        // console.log(lispan);
        lispan.style.textDecoration = "line-through";
    }
    if(e.target.classList.contains("remove"))
    {
        const liItem = e.target.parentNode.parentNode;
        // console.log(liItem);
        liItem.remove();
    }
});
