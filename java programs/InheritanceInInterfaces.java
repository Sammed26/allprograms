
interface Base
{
    void method1();
    void method2();
}

interface DerivedFromBase extends Base
{
    void method3();
    void method4();
}

class SampleClass implements DerivedFromBase
{
    public void method1()
    {
        System.out.println("method 1 called");
    }
    public void method2()
    {
        System.out.println("method 2 called");
    }
    public void method3()
    {
        System.out.println("method 3 called");
    }
    public void method4()
    {
        System.out.println("method 4 called");
    }

}

public class InheritanceInInterfaces
{
    public static void main(String[] args)
    {
        SampleClass s1 = new SampleClass();
        s1.method1();
        s1.method2();
        s1.method3();
        s1.method4();
    }
}