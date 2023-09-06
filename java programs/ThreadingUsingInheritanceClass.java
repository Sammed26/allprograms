
class Thread1 extends Thread
{
    @Override
    public void run()
    {
        int i = 0;
        while(i<50)
        {
            System.out.println("i'm right now in Thread1");
            System.out.println("i'm right now in Thread1");
            i++;
        }
    }
}

class Thread2 extends Thread
{
    @Override
    public void run()
    {
        int i = 0;
        while(i<50)
        {
            System.out.println("i'm right now in Thread2");
            System.out.println("i'm right now in Thread2");
            i++;
        }
    }
}

public class ThreadingUsingInheritanceClass
{
    public static void main(String[] args)
    {
        Thread1 t1 = new Thread1();
        Thread2 t2 = new Thread2();

        t1.start();
        t2.start();

        // from the output of this programs we come to know that by using threading it processes one thread(process) for specific time and other for other and this continues until the execution done 
        // so here some time 't1' method is called and some time 't2' method is called. and this is concurrency not parallelism


    }
}