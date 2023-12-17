
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
    })
    .catch((error)=>{
        // this block not runs unless there is network error or in above then part proper error handling (throw) is done
        console.log(error, "something went wrong");
    })
