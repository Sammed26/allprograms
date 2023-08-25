// abstract class must need to inherit and methods in that class means abstract methods must be overrided

abstract class AbstractBase
{
    abstract public void print();

}

class Derived extends AbstractBase
{
    public void print()
    {
        System.out.println("print method in derived class from abstract class is called");
    }
}

public class AbstractClass_AbstractMethod
{
    public static void main(String[] args)
    {
        Derived d1 = new Derived();
        d1.print();
    }
}   