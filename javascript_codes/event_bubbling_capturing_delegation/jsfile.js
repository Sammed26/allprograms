const grandparent = document.querySelector(".grandparent");
const parent = document.querySelector(".parent");
const child = document.querySelector(".child");

// event bubbling
// grandparent.addEventListener("click", ()=>{
//     console.log("you clicked grandparent");
// })
// parent.addEventListener("click", ()=>{
//     console.log("you clicked parent");
// })
// child.addEventListener("click", ()=>{
//     console.log("you clicked child");
// })
// in above case when you click on any element it calls that event but along with that it cheaks its parent then next parent then next parent and so on. and if its parents also have same event it calls that also and this is called event bubbling

// event capturing
// child.addEventListener("click", ()=>{
//     console.log("capturing ....... child");
// }, true)
// grandparent.addEventListener("click", ()=>{
//     console.log("capturing ..... grandparent");
// }, true)
// parent.addEventListener("click", ()=>{
//     console.log("capturing ....... parent");
// }, true)
// when you click child then first its outer most parent which having event capturing it called and then innner and then inner and so on


// event delegation
// when you apply event listener only on outer part ex. grandparent then automatically when you click innner div's also grandparent 's event listener called. and in event information object .target value is present and it is where you clicked and hence using 'e.target = .....' we can apply effect or use that element and we not require seperate event listeners for all 
grandparent.addEventListener("click", (e)=>{
    console.log(e.target);
})
