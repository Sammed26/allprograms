// write a javscript program to generate a random number and store it in a variable. The program then takes an input from the user to tell them whether the guess was correct, greater or lesser than tha original generated number.            
// 100 - (number of guesses) is the score of the player
// The program is expected to terminate once the number is guessed correctly. Nunber should be between 1 - 100

let random_actual_no = Math.floor((Math.random() * 100) + 1);  // 'Math.floor()' always rounds of the given number 

let guessed_no;
guessed_no = prompt("guess a number and enter it");
guessed_no = Number.parseInt(guessed_no);
let score = 100;

while(guessed_no != random_actual_no)
{
    if(guessed_no > random_actual_no)
    {
        guessed_no = prompt("your guessed number is greater than actual number, guess again");
        guessed_no = Number.parseInt(guessed_no);
    }
    else if(guessed_no < random_actual_no)
    {
        guessed_no = prompt("your guessed number is lesser than actual number, guess again");
        guessed_no = Number.parseInt(guessed_no);
    }
    else
    {
        console.log("CONGRATS !!!! You guessed number correctly");
    }
    score--;
}

console.log("you guessed number correct and that number is " + random_actual_no);
console.log("SCORE = ", score);

