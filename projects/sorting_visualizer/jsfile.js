// const array = document.getElementById("array");
// // console.log(array);
// const v_btn = document.getElementById("v-btn");
// // console.log(v_btn);

// const input_form = document.querySelector(".input-form");
// // console.log(input_form);

// let max_element_val = 0;

// var int_array = [];
// var string_array;
// input_form.addEventListener("submit", (e)=>{

//     e.preventDefault();

//     string_array = array.value;

//     int_array = string_array.split(",");

//     for (let index = 0; index < int_array.length; index++) {
//         const element = int_array[index];
//         int_array[index] = Number(element);
//     }

//     // console.log(int_array);
//     // console.log(typeof(int_array[0]));

//     const visualization_div = document.querySelector(".visualization-div");

//     for(let index = 0; index < int_array.length; index++)
//     {
//         const array_element_bar = document.createElement("div");
//         let element_class = `array_element${index}`;
//         array_element_bar.classList.add(element_class);

//         array_element_bar.innerText = " ";
//         visualization_div.append(array_element_bar);

//         // console.log(array_element_bar);

//         if(max_element_val < int_array[index])
//         {
//             max_element_val = int_array[index];
//         }

//     }

//     for(let i = 0; i< int_array.length; i++)
//     {
//         const element = document.querySelector(`.array_element${i}`);
//         element.style.height = `${(int_array[i]/max_element_val)*80}vh`;
//         element.style.width = `${85/int_array.length}vh`;
//         element.style.left = `${(95/int_array.length*i)}vh`;
//         element.style.top = `${80 - ((int_array[i]/max_element_val)*80)}vh`;

//     }

//     // visualization_div.style.border = "3px dotted black";
//     visualization_div.style.padding = "10px";

// })

// const btn = document.querySelector(".temp-btn");
// btn.addEventListener("click", function(){

//     bubble_sort();

//     // const first_ele = document.querySelector(`.array_element${0}`);
//     // console.log(first_ele);
//     // const fourth_ele = document.querySelector(`.array_element${3}`);

//     // first_ele.style.left = `${(95/int_array.length*3)}vh`;
//     // fourth_ele.style.left = `${(95/int_array.length*0)}vh`;
// })

// const swap_animation = (i) => {

//     // this is used for animations

//     // console.log("inside swap animation");

//     document.querySelector(`.array_element${i}`).style.left = `${(95/int_array.length*(i+1))}vh`;
//     document.querySelector(`.array_element${i+1}`).style.left = `${(95/int_array.length*(i))}vh`;

// }

// const swap_actual = (i)=>{

//     // this is used to swap actual array

//     var temp = int_array[i];
//     int_array[i] = int_array[i + 1];
//     int_array[i + 1] = temp;

// }

// // ===================== bubble sort ========================
// const bubble_sort = () =>{
//     for (var i = 0; i < int_array.length; i++) {

//         // Last i elements are already in place
//         for (var j = 0; j < (int_array.length - i - 1); j++) {

//             // Checking if the item at present iteration
//             // is greater than the next iteration
//             if (int_array[j] > int_array[j + 1]) {

//                 // If the condition is true
//                 // then swap them

//                 swap_animation(j);

//                 swap_actual(j);

//                 // console.log("swapped ", j ," and ", j+1);
//             }
//         }

//     }

//     console.log(int_array);

// }







// =========================================== or


const which_algorithm = document.getElementById("algorithm");
const submit_array = document.getElementById("submit-array");
// console.log(which_algorithm.value);

let submit_array_pressed_times = 0;
submit_array.addEventListener("click", ()=>
{ 
    if(submit_array_pressed_times == 0)
    {
        alert("Press once again");
        submit_array_pressed_times++;
    }
    
        if(which_algorithm.value == "select")
        {
            alert("Select an algorithm");
            
        }

        if(which_algorithm.value == "BubbleSort")
        {
            const pause_btn = document.getElementById("pause-btn");
            pause_btn.addEventListener("click", ()=>{
                alert("Paused!!!  Press ok to continue");
            });


            const arrayInput = document.getElementById("array");
            const submitArrayBtn = document.getElementById("submit-array");
            const visualizeBtn = document.getElementById("visualize-btn");
            const inputForm = document.querySelector(".input-form");
            const visualizationDiv = document.querySelector(".visualization-div");

            let maxElementVal = 0;
            let intArray = [];

            submitArrayBtn.addEventListener("click", () => {
                submitArray();

            });

            visualizeBtn.addEventListener("click", () => {
                bubbleSort();
            });



            const submitArray = () => {
                
                const stringArray = arrayInput.value;
                intArray = stringArray.split(",").map(Number);

                maxElementVal = Math.max(...intArray);

                visualizeBtn.disabled = false;
                visualizeArray();
            };

            const visualizeArray = () => {
                visualizationDiv.innerHTML = ""; // Clear previous visualization

                intArray.forEach((element, index) => {
                    const arrayElementBar = document.createElement("div");
                    arrayElementBar.innerHTML = `<p style="text-align: center; font-size: 15px"> ${intArray[index]} </p>`;
                    arrayElementBar.classList.add("array-element");
                    arrayElementBar.style.height = `${(element / maxElementVal) * 75}vh`;
                    arrayElementBar.style.width = `${80 / intArray.length}vh`;
                    arrayElementBar.style.left = `${(90 / intArray.length) * index}vh`;
                    arrayElementBar.style.top = `${75 - (element / maxElementVal) * 75}vh`;

                    visualizationDiv.appendChild(arrayElementBar);


                });

                const bars = document.querySelectorAll(".array-element");
                setTimeout(() => {

                    for (let i = last_iteration_index; i < intArray.length; i++) {
                        bars[i].classList.add("sorted-highlight");

                    }
                    
                }, 3000);


            };

            const swapElements = (index1, index2) => {
                const temp = intArray[index1];
                intArray[index1] = intArray[index2];
                intArray[index2] = temp;

                // Swap bars visually with a delay
                const bars = document.querySelectorAll(".array-element");
                const bar1 = bars[index1];
                const bar2 = bars[index2];
                console.log(bar1);
                console.log(bar2);

                //   // Apply green color to swapping bars
                //   bar1.style.backgroundColor = "#4CAF50";
                //   bar2.style.backgroundColor = "#4CAF50";

                //   bar1.classList.add("highlight-bar");
                //   bar2.classList.add("highlight-bar");
                //   console.log(bar1.classList);

                const tempLeft = bar1.style.left;
                bar1.style.left = bar2.style.left;
                bar2.style.left = tempLeft;

                // Remove green color after a short delay
                setTimeout(() => {
                    // Revert to original color
                    // bar1.classList.remove("highlight-bar");
                    // bar2.classList.remove("highlight-bar");
                }, 500); // Adjust the delay as needed
            };

            const addstyle = (j) => {
                const bars = document.querySelectorAll(".array-element");

                const bar1 = bars[j];
                const bar2 = bars[j + 1];

                bar1.classList.add("highlight-bar");
                bar2.classList.add("highlight-bar");
            };

            const removestyle = (j) => {
                const bars = document.querySelectorAll(".array-element");

                const bar1 = bars[j];
                const bar2 = bars[j + 1];

                bar1.classList.remove("highlight-bar");
                bar2.classList.remove("highlight-bar");
            };

            let last_iteration_index = -1;


            const desc_box = document.querySelector(".real-time-description-section");


            const bubbleSort = () => {

                const n = intArray.length;
                let i = 0;
                let j = 0;

                const sortStep = () => {
                    if (i < n - 1) 
                    {
                        last_iteration_index = n - i - 1;

                        
                        if (j < n - i - 1) 
                        {
                            desc_box.innerHTML = `<p>consider index ${j} and ${j+1} </p>`;
                            addstyle(j);

                            // bar1.classList.add("highlight-bar");
                            // bar2.classList.add("highlight-bar");

                            if (intArray[j] > intArray[j + 1]) 
                            {
                                
                                desc_box.innerHTML += `<br> <p> Swapped because ${j} th value (${intArray[j]}) is larger than ${j+1} th value (${intArray[j+1]})`;

                                swapElements(j, j + 1);

                            }
                            else
                            {
                                desc_box.innerHTML += `<br> <p> Not swapped because ${j} th value (${intArray[j]}) is smaller than ${j+1} th value (${intArray[j+1]})`;
                            }
                            j++;
                        }

                        else 
                        {
                            i++;
                            j = 0;
                        }

                        setTimeout(() => {

                            visualizeArray();

                            removestyle(j);

                        }, 1000); // Adjust the delay as needed

                        setTimeout(sortStep, 1500); // Adjust the delay as needed

                    }
                };

                sortStep();


            };
        }


}

);