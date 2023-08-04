console.log("string methods");

let str = "  sammed";

console.log(str.toUpperCase());
console.log(str.toLowerCase());
console.log(str.concat(" is the best", " Hi how are you?"));
for(let i = 0; i<str.length; i++)
{
    console.log(str[i]);
}
console.log(str.slice(1, 3));
console.log(str.replace("ed", "ya"));


console.log(str);
