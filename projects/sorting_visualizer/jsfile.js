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
                    arrayElementBar.style.height = `${(element / maxElementVal) * 65}vh`;
                    arrayElementBar.style.width = `${55 / intArray.length}vw`;
                    arrayElementBar.style.left = `${(65 / intArray.length) * index}vw`;
                    arrayElementBar.style.top = `${65 - (element / maxElementVal) * 65}vh`;
                    
                    visualizationDiv.appendChild(arrayElementBar);




                });

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

                const tempLeft = bar1.style.left;
                bar1.style.left = bar2.style.left;
                bar2.style.left = tempLeft;

                

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
                            desc_box.innerHTML = `<h3 style="text-align: center;">
                            Description Box
                        </h3><br><br><br><br><p>consider index ${j} and ${j+1} </p>`;
                            addstyle(j);

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