// in this we are going to list all methods in one object and pass reference of this to needed object

const userMethods = {
    "printname" : function(){
        console.log(`user name is ${this.name}`);
    },
    "printage" : function(){
        console.log(`user age is ${this.age}`);
    }
}

function createUser(name, age)
{
    const user = {};
    user.name = name;
    user.age = age;
    user.printname = userMethods.printname;   // reference is created
    user.printage = userMethods.printage;
    
    return user;
}


const user1 = createUser("shree", 14);
const user2 = createUser("sammed", 20);

console.log(user2.printname());
console.log(user1.printage());


// here memory wastage problem is solved but in function where we are creating object always need to pass reference. If suppose by mistake we forgot then what,
// so we need some mechanism that if in original object key or method is not found then it automatically cheaks in another objects and do accordingly and performs operation

// and the solution is we can make one object as proto of other
// next in =============== 4.js ================