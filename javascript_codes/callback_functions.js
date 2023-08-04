console.log("this is about callback function in javascript");

const addtwo = function(n1, n2) 
{
    console.log(`added value ${n1} and ${n2} and the value is ${n1+n2}`);
    return n1 + n2;
}


// you can use any name in place of 'callback' but callback is a convenction so using this is advised
const make_ten_times = (callback) =>{
    let val1 = prompt("enter first value");
    val1 = Number.parseInt(val1);

    let val2 = prompt("enter second value");
    val2 = Number.parseInt(val2);

    let addition = callback(val1, val2);

    console.log("added number is made 10 times");
    return addition*10;

}

let ans = make_ten_times(addtwo);
console.log("final answer is ", ans);
