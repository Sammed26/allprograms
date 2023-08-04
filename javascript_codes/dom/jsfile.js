// const navbar_heading = document.querySelector(".heading");
// console.dir(navbar_heading);

// navbar_heading.style.background = "white";
// navbar_heading.style.color = "black";
// navbar_heading.textContent = "I'm best";

// const manage_your_task_section_h1 = document.querySelector(".manage-tasks-section h1");
// console.log(manage_your_task_section_h1);
// console.log(manage_your_task_section_h1.textContent);
// console.log(manage_your_task_section_h1.innerText);

// const navbar_ul = document.getElementsByClassName("navbar-item");
// let navbar_ul = document.getElementsByTagName("a");
// console.log(navbar_ul[1]);
// simple for loop
// for(let i = 0; i<navbar_ul.length; i++)
// {
//     // console.log(navbar_ul[i]);
//     let navitem = navbar_ul[i];
//     navitem.style.backgroundColor = "white";
//     navitem.style.color = "black";
// }

// for of loop
// for(let navitem of navbar_ul)
// {
//     navitem.style.backgroundColor = "white";
//     navitem.style.color = "black";
// }

// for each loop
// we can't use directly for each loop, first we need to make it array and then
// console.log(navbar_ul);
// // console.log(Array.isArray(navbar_ul));
// navbar_ul = Array.from(navbar_ul);
// console.log(Array.isArray(navbar_ul));
// navbar_ul.forEach((navitem) => {
//     navitem.style.backgroundColor = "white";
//     navitem.style.color = "black";
// });

// adding element using js by createElement()
const newNavbarItem = document.createElement("li");
const newNavbarItemText = document.createTextNode("new item");
newNavbarItem.append(newNavbarItemText);
const navbar = document.querySelector(".navbar-ul");
// navbar.append(newNavbarItem);

// navbar.before(newNavbarItem);

navbar.after(newNavbarItem);

