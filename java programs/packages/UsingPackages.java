
import package2.Code4;

class Example extends Code4
{
    void method1()
    {
        System.out.println(a);
    }
}


public class UsingPackages
{
    public static void main(String[] args)
    {
        System.out.println("i am in UsingPackage.java file's main method");
        Example ex = new Example();
        ex.method1();
    }
}