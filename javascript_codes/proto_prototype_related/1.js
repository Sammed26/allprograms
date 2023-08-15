// in this we first create basic object

const user1 = {
    "name" : "sammmed",
    "age" : 20,
    "printname" : function(){
        console.log(`name of user is ${this.name}`);
    },
    "printage" : function(){
        console.log(`age of user is ${this.age}`);
    }
}

// console.log(user1.printage());
// if i want to store function and then call later then i must use bind method because this value is later changed.
// const printnamebybind = user1.printname.bind(user1);
// console.log(printnamebybind());


// suppose i want to create millions of users then writing repeatedely is not good or impossible
// so we use functions 


// ======== next in 2.js ========
