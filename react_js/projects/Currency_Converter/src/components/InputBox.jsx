import { useState } from "react";

function InputBox({label, amount=0})
{
    return (

        <div className="main-div">
            <label>{label}</label>
            <input type="number" value={amount}></input>

            <label >   select currency </label>
            <select>
                <option value="inr">inr</option>
                <option value="usd">usd</option>
                
            </select>
        </div>

    )
}


export default InputBox;
