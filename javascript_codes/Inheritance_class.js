console.log("this is about inheritance, setters and getters in classes");

class Human{
    constructor(NoOfHands, NoOfLegs)
    {
        this.NoOfHands = NoOfHands;
        this.NoOfLegs = NoOfLegs;
    }
    get display_hands()
    {
        return `Number of Hands = ${this.NoOfHands}`;
    }
    get display_Legs() // by writing get you call it without parenthesis (ex. object.display_Legs) only. this treats as property 
    {
        return `Number of Legs = ${this.NoOfLegs}`;
    }
}

class Male extends Human{
    constructor(NoOfHands, NoOfLegs, gender)
    {
        super(NoOfHands, NoOfLegs); // this is used to call base class constructor as you do not need to write again
        this.gender = gender;
    }
    set gender_funct_modify(gender)
    {
        const [part1, part2] = gender.split(" ");
        this.gender_part1 = part1;  
        this.gender_part2 = part2;  
    }
}

const male1 = new Male(2, 2, "male");
// console.log(male1.display_hands());
        // OR
console.log(male1.display_hands);
// male1.gender_funct_modify("sigma male");  // using set you can write it as ' male1.gender_funct_modify = "sigma male" '
male1.gender_funct_modify = "sigma male";

console.log(male1);





// in classes we have static functions as well as static properties also. that properties are only accessed by class name not by object names. this are belongs to class

