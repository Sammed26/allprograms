// in this we are making one object as proto of other that it search automatically in another object about values
// for this we can create object by another method in which passed object is also becomes its proto 
// ex. 'const newobj = Object.create(prevobj/referenceobj)' 
// this sets 'prevobj' as reference to 'newobj'
// proto = means it is reference object


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
    const user = Object.create(userMethods);  // another method to create object with proto 
    user.name = name;
    user.age = age;
    
    
    return user;
}

const user1 = createUser("shree", 14);
const user2 = createUser("sammed", 20);

console.log(user1.printname());
console.log(user2.printage());


// this is all about proto. so next we study about prototype.
// prototype and proto does same thing in our example but they are not same as proto is referece object and prototype is empty space(object) or which is only avaliable with functions

// next in ================== 5.js ===========