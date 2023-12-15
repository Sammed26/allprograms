
console.log("code started");

const partsNeeded = [ 'engine', 'wheels', 'stering', 'rice'];

// here I want to make a car for this the parts required are 'body, engine, wheels, stering'
// so first i promise that i can make car for you
// then i cheak in my partsneeded array, if all the parts are avaliable then i can make car and my promise is fulfilled
// if i don't have parts then my promise is rejected

// ========== promise creation ===========

const mypromise = new Promise((resolve, reject)=>{
    if(partsNeeded.includes('body') && partsNeeded.includes('engine') && partsNeeded.includes('wheels') && partsNeeded.includes('stering'))
    {
        resolve("Car is ready");
    }
    else
    {
        reject("sorry");
    }
})



// ============ promise consumption ===========

// mypromise.then(
//     // executes if promise is resolved
//     (carready)=>{ // in carready the value in resolve("car is ready") is come
//         console.log("Congrats", carready);
//     }
//     ,
//     // executes if promise is rejected
//     (carnotready)=>{ // reject("sorry") 's value comes in carnotready
//         console.log(carnotready, "car is not ready");
//     }
// )

// if you don't want to write like above promise consumption then

setTimeout(() => {
    console.log("inside 1 setTimeout");
}, 0);

// after completion this work is going to add in microtask queue
mypromise.then((carready)=>{
    console.log("congrats", carready);
}).catch((carnotready)=>{
    console.log(carnotready, "car is not ready");
})

// this word is added to callback queue
setTimeout(() => {
    console.log("inside 2 setTimeout");
}, 0);

for(let i = 0; i<10; i++)
{
    console.log("inside for loop");
}

console.log("code ends");


// between callback queue and microtask queue microtask queue has highest priority



function mypromisechaining(){
    return new Promise((resolve, reject)=>{
        let value = "sam";
        if(value)
        {
            resolve(value);
        }
        else{
            reject();
        }
    })
}


mypromisechaining().then((value)=>{
    console.log(value);
    value += "med";
    return value;
})
.then((value)=>{
    console.log(value);
    value = value + " koshti";
    return value;
})
.then((value)=>{
    console.log(value);
})


