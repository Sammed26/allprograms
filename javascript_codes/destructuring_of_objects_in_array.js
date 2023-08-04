console.log("this is all about destructuring objects in array also called as nested destructuring");

const users = [
    {userid: 1, name:"sammed", income:"1.5 trillian doller"},
    {userid: 2, name:"shree", income:"2.5 trillian doller"},
    {userid: 3, name:"sam", income:"1 trillian doller"},
    {userid: 4, name:"sk", income:"4 trillian doller"},
]

// const [user1copy] = users;
// console.log(user1copy);

const [user1copy, ,{name:user3name, userid}] = users;

console.log(user1copy);
console.log(user3name);
console.log(userid);
