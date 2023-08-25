class base
{
    void print()
    {
        System.out.println("print() from base class is called");
    }
    void baseMethod1()
    {
        System.out.println("base class method 1 is called");
    }
}

class derived extends base
{
    @Override   // not compulsary but recommended
    void print()
    {
        System.out.println("print() from derived class called");
    }
    void derivedMethod1()
    {
        System.out.println("derived class method 1 is called");
    }
}

public class DynamicMethodDispatch
{
    public static void main(String[] args)
    {
        base baseObj = new derived();  // this is valid you can point derived class object by base class pointer

        baseObj.print();  // derived class print runs because the object created is of derived class type although it is pointed by base class reference

        // baseObj.derivedMethod1();  // methods other than overrided method can't called as we created like above
        // this is like that, you created reference to one class by pointing it to other class so you use only your created reference not other method
        // suppose someone given you smartphone to listen music so listen only music. why you accessing other. In this case listen music is one interface/class and smartphone is other interface/class


    }
}
