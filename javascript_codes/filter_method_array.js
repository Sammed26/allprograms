console.log("this is about filter method in arrays");

const array = [2, 45, 26, 7, 8, 56, 10];

const divisible_by_5_numbers = (value) =>{
    return value % 5 === 0
}

const divisible_by_5_array = array.filter(divisible_by_5_numbers);

console.log(divisible_by_5_array);