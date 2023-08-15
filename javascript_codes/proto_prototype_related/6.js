// this is about new keyword. by using new prototype link will automatically created

function createUser(name, age)
{
    this.name = name;  // this is used because
    this.age = age;
}
createUser.prototype.printname = function(){
    console.log(`user name is ${this.name}`);
}
createUser.prototype.printage = function(){
    console.log(`user name is ${this.age}`);
}
// console.log(createUser.prototype);

const user1 = new createUser("shree", 14);
const user2 = new createUser("sammed", 20);

const username = user1.printname();
console.log(username);
const userage = user2.printage();
console.log(userage);

// new keyword will create empty object, assign all given key value pairs and also established link means prototype of function

// remember that only function has prototype and that we are using.