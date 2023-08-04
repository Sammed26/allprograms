const allbtns = document.querySelectorAll("button");
console.log(allbtns);

// simple for loop
// for(let i = 0; i<allbtns.length; i++)
// {
//     allbtns[i].addEventListener("click", function(){
//         console.log(this.textContent);
//     })
// }

// for of loop
// for(let btn of allbtns)
// {
//     btn.addEventListener("click", function(){
//         console.log(this.textContent);
//     })
// }

// for each loop
let count = 0;
allbtns.forEach(function(btn){
    btn.addEventListener("click", function(event){
        console.log(this.textContent);
        console.log(event);  // here event is object in which information related to event is stored
        if(count == 0)
        {
            event.target.style.background = "black";
            event.target.style.color = "white";
            count++;
        }
        else
        {
            event.target.style.background = "white";
            event.target.style.color = "black";
            count--;
        }
    })
})
