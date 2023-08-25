// abstract class in which there is atleast one abstract method not necessarily all but in interfaces there all methods must be abstract

interface human
{
    int noOfHands = 2;
    int noOfNose = 1;

    void canMove();
}

// you can't create object of interfaces but you can create reference to it

interface animal
{
    void isAnimal();
}

// you can implement from many interfaces in one class but you can's inherit from multiple abstract classes
class men implements human, animal
{
    public void canMove()
    {
        System.out.println("yes, humans can move");
    }
    public void isAnimal()
    {
        System.out.println("humans are animals");
    }
}

public class Interfaces
{
    public static void main(String[] args)
    {
        men m = new men();
        m.canMove();
        m.isAnimal();
        System.out.println("humans have " + m.noOfHands + " hands");
        System.out.println("humans have " + m.noOfNose + " nose");  // you can only access these variables(properties) from interfaces but you can't modify them

    }
}