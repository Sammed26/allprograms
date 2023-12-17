
const url = "https://jsonplaceholder.typicode.com/posts";

function ajaxrequest(method, URL)
{
    return new Promise((resolve, reject)=>{
        const xhr = new XMLHttpRequest();
        xhr.open(method, URL);

        xhr.onload = function(){
            if(xhr.status >= 200 && xhr.status < 300)
            {
                resolve(xhr.response);
            }
            else
            {
                reject("error");
            }
        }

        xhr.onerror = ()=>{
            console.log("some network issue");
        }

        xhr.send();
    })
}


ajaxrequest("GET", url)
    .then((response)=>{
        const data = JSON.parse(response);
        // console.log(data);
        return data;
    })
    .then((data)=>{
        // console.log(data);
        const id_3 = data[2].id;
        // console.log(id_3);
        return id_3;
    })
    .then((id)=>{
        const url1 = `${url}/${id}`;
        // console.log(url1);

        return ajaxrequest("GET", url1);
    })
    .then((inner)=>{
        console.log(inner);
        const object_of_3rd = JSON.parse(inner);
        // console.log(object_of_3rd);
        return object_of_3rd;
    })
    .then((innerobj)=>{
        console.log(innerobj);
        console.log(innerobj.body);
    })
    .catch((error)=>{
        console.log(error);
    })



