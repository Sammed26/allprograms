const url = "https://jsonplaceholder.typicode.com/posts";

const xhr = new XMLHttpRequest();
// console.log(xhr);

xhr.open("GET", url);


xhr.onreadystatechange = function(){
    if(xhr.readyState === 4)
    {
        const response = xhr.response;
        // 'response' type is string which is in json format
        // console.log(response);
        
        // converted from json to js object
        const data = JSON.parse(response);
        // 'data' type is js object
        console.log(data);
    }
}


//            OR



// you know that you will get response after ready state is 4 then xhr.onload is a method which runs only when ready state is 4
xhr.onload = function(){
    const response1 = xhr.response;
    // console.log(response1);

    const data1 = JSON.parse(response1);
    console.log(data1);
    const para = document.querySelector("p");
    para.textContent = data1;
    console.log(para);
}



xhr.send();

