
const url = "https://jsonplaceholder.typicode.com/posts";

fetch(url) // it always returns a promise
    .then(resp =>{
        if(resp.ok == true)
        {
            return resp.json();
        }
        else
        {
            throw(error);
        }
    })
    .then((data)=>{
        console.log(typeof data);
        console.log(data);
        console.log(data[2].body)
        const ptag = document.querySelector(".p-tag").textContent += data[2].id*70;
    })
    .catch((error)=>{
        // this block not runs unless there is network error or in above then part proper error handling (throw) is done
        console.log(error, "something went wrong");
    })
