// in this we are going to create function to create objects

function createUser(name, age)
{
    const user = {};
    user.name = name;
    user.age = age;
    user.printname = function (){
        console.log(`user name is ${this.name}`);
    }
    user.printage = function(){
        console.log(`user age is ${this.age}`);
    }
    return user;
}

const user1 = createUser("sammed", 20);
const user2 = createUser("shree", 14);
console.log(user1.name);


// but the problem is whenever new object is being created the same object methods are also going to be created and this is repetation or wastage of memory
// so solution is you can create another object and in that write whatever methods in user to that object and in user just pass the reference

// ========= next in 3.js =============
