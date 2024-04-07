const array = document.getElementById("array");
// console.log(array);
const v_btn = document.getElementById("v-btn");
// console.log(v_btn);

const input_form = document.querySelector(".input-form");
// console.log(input_form);

let max_element_val = 0;

var int_array = [];
var string_array;
input_form.addEventListener("submit", (e)=>{

    e.preventDefault();

    string_array = array.value;

    int_array = string_array.split(",");


    for (let index = 0; index < int_array.length; index++) {
        const element = int_array[index];
        int_array[index] = Number(element);
    }

    // console.log(int_array);
    // console.log(typeof(int_array[0]));


    const visualization_div = document.querySelector(".visualization-div");

    for(let index = 0; index < int_array.length; index++)
    {
        const array_element_bar = document.createElement("div");
        let element_class = `array_element${index}`;
        array_element_bar.classList.add(element_class);

        array_element_bar.innerText = " ";
        visualization_div.append(array_element_bar);

        // console.log(array_element_bar);

        if(max_element_val < int_array[index])
        {
            max_element_val = int_array[index];
        }
        
    }

    for(let i = 0; i< int_array.length; i++)
    {
        const element = document.querySelector(`.array_element${i}`);
        element.style.height = `${(int_array[i]/max_element_val)*80}vh`;
        element.style.width = `${85/int_array.length}vh`;
        element.style.left = `${(95/int_array.length*i)}vh`;
        element.style.top = `${80 - ((int_array[i]/max_element_val)*80)}vh`;

    }


    visualization_div.style.border = "3px dotted black";
    visualization_div.style.padding = "10px";


    


    



})



const btn = document.querySelector(".temp-btn");
btn.addEventListener("click", function(){

    bubble_sort();

    // const first_ele = document.querySelector(`.array_element${0}`);
    // console.log(first_ele);
    // const fourth_ele = document.querySelector(`.array_element${3}`);

    // first_ele.style.left = `${(95/int_array.length*3)}vh`;
    // fourth_ele.style.left = `${(95/int_array.length*0)}vh`;
})




const bubble_sort = () =>{
    for (var i = 0; i < int_array.length; i++) {
 
        // Last i elements are already in place  
        for (var j = 0; j < (int_array.length - i - 1); j++) {
    
            // Checking if the item at present iteration 
            // is greater than the next iteration
            if (int_array[j] > int_array[j + 1]) {
    
                // If the condition is true
                // then swap them
                
                
                document.querySelector(`.array_element${j}`).style.left = `${(95/int_array.length*(j+1))}vh`;
                document.querySelector(`.array_element${j+1}`).style.left = `${(95/int_array.length*(j))}vh`;
                
                var temp = int_array[j];
                int_array[j] = int_array[j + 1];
                int_array[j + 1] = temp;

                // console.log("swapped ", j ," and ", j+1);
            }
        }


        setTimeout(() => {
            
        }, 1000);


        



    }

    // console.log(int_array);

}




