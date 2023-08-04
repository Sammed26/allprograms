console.log("this is all about optional chaining");

// optional chaining means suppose you created object earlier and you know the data or object to object is coming later. But when you try to access object's inside data before data writing, you want error to not come

// const user = {
//     firstname : "sammed",
// };

           // OR

let user;

console.log(user?.firstname); 
console.log(user?.birthdate?.day);
