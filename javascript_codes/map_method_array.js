console.log("this is about map method in arrays");

const cube = (number) =>{
    return number*number*number;
}

const array = [2, 26, 7, 6, 45, 8];
const cube_arr = array.map(cube);

//           OR

// const cube_arr = array.map((number) =>{
//     return number*number*number;
// });

console.log(cube_arr);

