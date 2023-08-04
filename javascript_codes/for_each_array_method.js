console.log("this is about forEach method in array");

const func1 = (number, index) => {
    console.log(`for index ${index}, 10 times of number is ${number*10}`);
}

const array = [26, 7, 3, 56, 12];

array.forEach(func1);

            // OR

// array.forEach(function(number, index){
//     console.log(`for index ${index}, 10 times of number is ${number*10}`);
// });


