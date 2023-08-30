
class base 
{
    private int x;

    base()
    {
        this.x = 0;
    }
    base(int valx)
    {
        this.x = valx;
    }

    void setx(int val)
    {
        this.x = val;
    }
    int getx()
    {
        return this.x;
    }
    
    // this method is overrided in derived class
    public void printName()
    {
        System.out.println("name = sammed");
    }
}

class derived extends base
{
    private int y;

    derived()
    {
        y = 0;
    }
    derived(int valx, int valy)
    {
        super(valx);
        this.y = valy;
    }
    derived(int valy)
    {
        this.y = valy;
    }
    void sety(int val)
    {
        this.y = val;
    }
    int gety()
    {
        return this.y;
    }

    @Override
    public void printName()
    {
        System.out.println("name = Sammed Sadashiv Koshti");
    }
}

public class Inheritance 
{
    public static void main(String[] args)
    {
        derived d1 = new derived(26);
        //d1.setx(26);
        //System.out.println("value of x is " + d1.getx());
        System.out.println(d1.getx());
        System.out.println(d1.gety());
        d1.printName();
    }
}