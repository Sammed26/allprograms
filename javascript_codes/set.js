console.log("this is all about set");

const array = [1, 34, 36, 7, 56, 8];

const numbers = new Set('1');
numbers.add(array);
numbers.add(34);

console.log(numbers);

for(let number of numbers)
{
    console.log(number);
}

// to check whether a number of element is present in set we use has() mathod
// if present it returns true else false

console.log(numbers.has(34));

