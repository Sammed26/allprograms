
const root = document.querySelector("#root");


const react_element = {

    type: 'a',
    props:{
        href: 'https://myportfolio-s26.netlify.app',
        target: '_blank'
    },
    inner_text_to_display: 'view my portfolio'

}



function insert_react_element(react_element, root)
{
    const portfolio_btn = document.createElement(react_element.type);

    portfolio_btn.innerHTML = react_element.inner_text_to_display;

    for (const prop in react_element.props) 
    {
        portfolio_btn.setAttribute(prop, react_element.props[prop]);
    }

    root.appendChild(portfolio_btn);
}

insert_react_element(react_element, root);
