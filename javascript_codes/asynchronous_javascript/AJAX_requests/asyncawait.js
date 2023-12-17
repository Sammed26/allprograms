
const url = "https://jsonplaceholder.typicode.com/posts";

const getpost = async()=>{
    const response = await fetch(url);
    // console.log(response);
    // console.log(response.json()); // this is a promise

    if(response.ok == true)
    {
        return await response.json();
    }
    else
    {
        throw("some error occurred");
    }

}

getpost()
    .then((data)=>{
        console.log(data);
    })
    .catch((error)=>{
        console.log("error", error);  // this is same as fetch api, runs only when network error occurred or explicitly in throw error is handled
    })
