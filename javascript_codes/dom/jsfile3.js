// const navbar = document.querySelector(".navbar-ul");
// console.log(navbar);
// navbar.insertAdjacentHTML("beforeend", "<li><a href=\"#new\">New</a></li>");
// navbar.insertAdjacentHTML("beforebegin", "<li><a href=\"#new\">New</a></li>");
// navbar.insertAdjacentHTML("afterend", "<li><a href=\"#new\">New</a></li>");
// navbar.insertAdjacentHTML("afterbegin", "<li><a href=\"#new\">New</a></li>");


const signup_form = document.querySelector(".signup-form");
const new_form_ele = document.createElement("input");
new_form_ele.textContent = "this is new form element";
signup_form.appendChild(new_form_ele);
console.log(signup_form);

