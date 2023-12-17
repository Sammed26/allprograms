// ---------------------- Ajax using callbacks --------------

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
    if(xhr.status >=200 && xhr.status < 300)
    {
        const response1 = xhr.response;
        // console.log(response1);
    
        const data1 = JSON.parse(response1);
        console.log(data1);
        const para = document.querySelector("p");
        const post1 = data1[10].title;
        para.textContent = post1;
        console.log(para);
    }
    else
    {
        console.log("some error occurred");
    }
}


// this error is occurred when network related error is occurred
xhr.onerror = function(){
    console.log("network issue..........");
}



xhr.send();

