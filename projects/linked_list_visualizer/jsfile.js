
function node(val)
{
    return `<div class="pointer-notation">
                <p>-></p>
            </div>
            <div class="node">
                <div class="data">
                    <p>${val}</p>    
                </div>
                <div class="pointer-part">
                    
                </div>
            </div>`
}





// ---------------------------- insert at last -----------------------

const insert_at_end_btn = document.querySelector(".insert-at-end");

const visualization_section = document.querySelector(".visualization-section");

let where_to_put = 0;
insert_at_end_btn.addEventListener("click", ()=>{
    
    const text_area = document.getElementById("element");
    let data = text_area.value;

    let inner_html = node(data);
    const new_node = document.createElement("div");
    new_node.classList.add("main-node");

    new_node.innerHTML = inner_html;
    new_node.style.left = `${(where_to_put*10) + 8}vw`;

    const all_main_nodes = Array.from(document.querySelectorAll(".node"));

    let delay = 500;
    all_main_nodes.forEach(element => {
        setTimeout(() => {
            element.style.zoom = "115%";
            element.style.border = "4px solid black"
        }, delay);

        setTimeout(() => {
            element.style.zoom = "100%";
            element.style.border = "2px solid black";
        }, delay+1000);

        delay += 1500;
    });


    
    setTimeout(() => {

        visualization_section.appendChild(new_node);
        
    }, 1800*all_main_nodes.length);

    where_to_put++;

    console.log(data);

});





// ------------------------ insert at first ------------------------

const insert_at_first_btn = document.querySelector(".insert-at-first");

insert_at_first_btn.addEventListener("click", ()=>{

    const text_area = document.getElementById("element");

    let data = text_area.value;

    const all_main_nodes = Array.from(document.querySelectorAll(".main-node"));
    
    let start_index = 1;
    all_main_nodes.forEach(element => {
        element.style.left = `${(start_index*10) + 8}vw`;
        
        start_index++;
    });


    let inner_html = node(data);
    const new_node = document.createElement("div");
    new_node.classList.add("main-node");

    new_node.innerHTML = inner_html;
    new_node.style.left = "8vw";

    visualization_section.prepend(new_node);


    console.log(all_main_nodes);

    where_to_put++;
})



