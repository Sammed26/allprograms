const navbar_ul = document.querySelector(".navbar-ul");
// const navbarItems = document.querySelectorAll(".navbar-ul li");  // by selecting by query selector and then adding new element into it, gives static list and after printing not reflects new added element
const navbarItems = navbar_ul.getElementsByTagName("li");  // by selecting like this gives live list and added element after printing gives live list even if early it selected and new element is added after selecting
// const new_navbar_item = document.createElement("li");
const first_nav_item = navbar_ul.querySelector(".navbar-item");
const new_navbar_item = first_nav_item.cloneNode(true);  // true indicates deep cloning means inner html is also cloned
// new_navbar_item.textContent = "new item";
navbar_ul.append(new_navbar_item);
console.log(navbarItems);