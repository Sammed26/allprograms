console.log("this is all about array of objects");

const users = [
    {userid: 1, name:"sammed", income:"1.5 trillian doller"},
    {userid: 2, name:"shree", income:"2.5 trillian doller"},
    {userid: 3, name:"sam", income:"1 trillian doller"},
    {userid: 4, name:"sk", income:"4 trillian doller"},
]

for(let user of users)
{
    console.log(user.income);
    // console.log(user);
}
