console.log("this is about closures in js");

function cal_power(power){
    return function (num){
        console.log(num**power);
    }
}

let myfunc = cal_power(2);
myfunc(4); // when this function is called then its parent function's local variables like power are not there. This are returned when cal_power() is called, and that we found in myfunc() closures 

