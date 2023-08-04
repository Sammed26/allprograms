console.log("this is about Map() iterable in javascript");
// in map you can store keys of any type 


const user = new Map([['name', 'sammed'], ['age', 20], [2, 'two']]);

user.set(1, 'one');

const user1 = {
    'lastname': 'koshti',
    'net income': '1.5 trillian dollar'
}
user.set('info', user1);
user.set(user1, {'gender': 'male', 'profession': 'business'});
console.log(user);

console.log(user1["net income"]);
console.log(user.get(user1).profession);
console.log(user.get(2));
