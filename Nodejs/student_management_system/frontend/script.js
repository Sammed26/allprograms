// console.log("in console");

const edit = document.querySelector(".edit-form");
const dele = document.querySelector(".delete-form");
const add = document.querySelector(".add-form");

function hideallforms()
{
    edit.style.display ="none";
    dele.style.display ="none";
    add.style.display ="none";
}
hideallforms();

const edit_button = document.querySelector(".edit-student");
const show_button = document.querySelector(".show-student");
const delete_button = document.querySelector(".delete-student");
const add_button = document.querySelector(".add-student");

edit_button.addEventListener('click', ()=>{
    hideallforms();
    edit.style.display = "block";

})

document.getElementById('edit').addEventListener('submit', async (event)=>{
    event.preventDefault();

    const rollno = document.getElementById('old-rollno').value;

    try{
        const newdata = {
            "name": document.getElementById("new-name").value,
            "rollno": document.getElementById("new-rollno").value,
            "grade": document.getElementById("new-grade").value
        }
        const response = await fetch(`http://localhost:3000/edit/${rollno}`,{
                method:"PUT",
                headers:{
                    'Content-Type': 'application/json'
                },
                body: JSON.stringify(newdata)
        });

        if(!response.ok)
        {
            console.log("record not found");
            alert("record not found");
        }
        else
        {
            console.log("record updated successfully");
            alert("record updated successfully");
        }

    }
    catch(error)
    {
        alert("Internal Server Error : ", error.message);
    }

})




show_button.addEventListener('click', async ()=>{
    hideallforms();
    
    try{

        const response = await fetch('http://localhost:3000/show')
        const data = await response.json();
        alert(JSON.stringify(data)); // Display the data properly
        console.log(data);


    }
    catch(error){
        alert("Internal Server Error: " + error);
    }
    
})

delete_button.addEventListener('click', ()=>{
    hideallforms();
    dele.style.display = "block";

})

document.getElementById("delete").addEventListener('submit', async (event)=>{

    event.preventDefault();

    
    const rollno = parseInt(document.getElementById("delete-rollno").value, 10)
    
    

    try{
        const response = await fetch(`http://localhost:3000/delete/${rollno}`, {
            method: "DELETE"
        });

        const message = await response.text();
        alert(message);
        document.getElementById("delete").reset();
    }
    catch(error){
        alert("Internal Server Error: "+ error);
    }

});

add_button.addEventListener('click', ()=>{
    hideallforms();
    add.style.display = "block";

})


document.getElementById("add").addEventListener('submit', async (event)=>{
    event.preventDefault();

    const new_student_data = {
        "name": document.getElementById("add-name").value,
        "rollno": parseInt(document.getElementById("add-rollno").value, 10),
        "grade": parseInt(document.getElementById("add-grade").value, 10)
    }

    try{
        const response = await fetch('http://localhost:3000/add', {
            method: "POST",
            headers:{
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(new_student_data)
        });

        const message = await response.text();
        alert(message);
        document.getElementById("add").reset();
    }
    catch(error){
        alert("Internal Server Error : " + error);
    }

})

