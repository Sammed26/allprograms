// this is about prototype
// in javascript functions are function + object(empty space). previously for making proto we are using another object but function also has that and term name prototype. So why we not use that


function createUser(name, age)
{
    const user = Object.create(createUser.prototype);  // here reference is set to its own prototype
    user.name = name;
    user.age = age;

    return user;
}

createUser.prototype.printname = function(){
    console.log(`user name is ${this.name}`);
}
createUser.prototype.printage = function(){
    console.log(`user name is ${this.age}`);
}

const user1 = createUser("shree", 14);
const user2 = createUser("sammed", 20);
console.log(user1.printname());
console.log(user2.printage());


// this is fine and nice but we are now going to study new keyword that makes our task even more easy

// next in ============== 6.js ===============