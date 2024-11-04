import React from "react";

// function Card(props){

//     return (

//         <div className="card">
//             <h3>{props.username}</h3>
//             <p>{props.occupation}</p>
//             <button>
//                 {props.btn_text}
//             </button>
//         </div>

//     )
// }


function Card({username='NA', occupation='NA', btn_text}){

    

    return (
        <>

            <div className="card">
                <h3>{username}</h3>
                <p>{occupation}</p>
                <button>
                    {btn_text='NA'}
                </button>
            </div>
        
        </>


    )
}

export default Card
