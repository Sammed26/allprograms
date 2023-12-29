let startTime, endTime;

const para_to_type = document.querySelector(".para-to-type");

let para_to_type_length = Array.from(para_to_type.innerText);



para_to_type_length = para_to_type_length.length;
// console.log(para_to_type_length);

let para_to_type_text = para_to_type.textContent;

const what_typed_para = document.querySelector(".what-typed-para");
// console.log(what_typed_para);
let what_typed = "";


let para_to_type_array = para_to_type.innerText.trim().split(/\s+/);

let what_typed_para_array = "";

function calculateAccuracy()
{
    what_typed_para_array = what_typed_para.innerText.trim().split(/\s+/);

    let error = 0;

    for(let i = 0; i<what_typed_para_array.length; i++)
    {
        let word_from_what_typed = what_typed_para_array[i];
        let word_from_para_to_type = para_to_type_array[i];

        for(let j = 0; j<para_to_type_array[i].length; j++)
        {
            if(word_from_para_to_type[j] != word_from_what_typed[j])
            {
                // console.log("error at " + word_from_para_to_type[j]);
                error++;
                break;
            }
        }

    }

    // console.log(para_to_type_array);
    // console.log(what_typed_para_array);

    return error;
}

function cheakScore(){

    let error = calculateAccuracy();

    // console.log("error = " + error);


    let accuracy = Math.round(((((para_to_type_array.length)-error)/para_to_type_array.length))*100).toFixed(2);



    // console.log(accuracy);
    const results = document.querySelector(".results");
    results.style.opacity = "1";
    const accu = document.querySelector(".accuracy");
    // console.log(accu);
    accu.textContent = `Accuracy = ${accuracy}`;
    accu.style.display = "block";

    const btn = document.querySelector(".results-show-hide-btn");
    // console.log(btn);
    btn.style.display = "block";

    btn.addEventListener("click", ()=>{
        if(btn.textContent === "Hide")
        {
            btn.textContent = "Show";
            btn.style.top = "95%";
            results.style.opacity = "0";
        }
        else
        {
            btn.textContent = "Hide";
            btn.style.top = "18%";
            results.style.opacity = "1";
        }
    })

    // console.log("startTime = " + startTime);
    // console.log("endTime = " + endTime);
    // console.log("total Time = " + (endTime - startTime)/1000);


    let total_time_in_min = ((endTime - startTime)/(1000*60));
    
    console.log(total_time_in_min);



    const wpm = document.querySelector(".wpm");

    let speed = Math.round(what_typed_para_array.length/ total_time_in_min);

    wpm.textContent = `WPM = ${speed}`;
    // console.log("WPM = " + Math.round(what_typed_para_array.length/ total_time_in_min));

}

// keypress is depricated 
let count = para_to_type_length;
function keydownfunc(e){
    if(count == para_to_type_length)
    {
        startTime = performance.now();
    }
    if(count == 0)
    {
        document.removeEventListener("keydown", keydownfunc);
        // console.log(what_typed);

        endTime = performance.now();

        cheakScore();

    }
    if(/^[a-zA-Z0-9 (),.'"]$/.test(e.key) || e.key === "Backspace")
    {
        if(e.key === "Backspace")
        {
           what_typed = what_typed.slice(0, -1);
           what_typed_para.innerText = "" + what_typed;
           count++;
        }
        else
        {
            what_typed = what_typed + e.key;
            what_typed_para.innerText = "" + what_typed;
            // console.log("inside keydownfunc");
            count--;
        }
        
        
    }
    
}


    document.addEventListener("keydown", keydownfunc);
   
















// para_to_type.innerText.charAt(i)

