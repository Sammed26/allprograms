
class Monkey
{
    void jump()
    {
        System.out.println("jumping......");
    }
    void bite()
    {
        System.out.println("biting........");
    }
}

interface BasicAnimal
{
    void eat();
    void sleep();
}

class Human extends Monkey implements BasicAnimal
{
    public void eat()
    {
        System.out.println("eating......");
    }
    public void sleep()
    {
        System.out.println("sleeping......");
    }
}

public class MonkeyAnimal
{
    public static void main(String[] args)
    {
        Human h1 = new Human();
        h1.jump();
        h1.bite();
        h1.eat();
        h1.sleep();
    }
}