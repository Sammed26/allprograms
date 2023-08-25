
abstract class BasicPen 
{
    abstract void write();
    abstract void refill();
}

class CompanyPen extends BasicPen
{
    void write()
    {
        System.out.println("writing.....");
    }
    void refill()
    {
        System.out.println("refilling......");
    }
    void company_Pen()
    {
        System.out.println("this is high quality company pen");
    }
}

public class Pen
{
    public static void main(String[] args)
    {
        CompanyPen cp = new CompanyPen();
        cp.write();
        cp.refill();
        cp.company_Pen();
    }
}