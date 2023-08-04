// const root = document.getRootNode();
// console.log(root);


// const htmlele = root.childNodes;
// console.log(htmlele);

// const head = document.querySelector('head');
// console.log(head.nextSibling);
// console.log(head.nextElementSibling);
// head.nextElementSibling.style.backgroundColor = 'black';
// head.nextElementSibling.style.color = 'white';

// adding html element using innerhtml. not recommended to use to add another, recommended to change whole innner html
const container = document.querySelector('.container');
console.log(container);
container.innerHTML += "<p>this is new paragraph</p>";
