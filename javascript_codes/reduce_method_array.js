console.log("this is all about reduce method in array");

const array = [26, 7, 8, 56, 34];

const multiplication = array.reduce((accumulator, currentValue) => {
    return accumulator*currentValue;
});

console.log(multiplication);





// syntax
// variable_to_store_return_value = array.reduce(callback_function(){} , initial_value);


