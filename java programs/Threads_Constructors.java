

public class Threads_Constructors
{
    public static void main(String args[])
    {
        Threadd thr1 = new Threadd();
        Thread th1 = new Thread(thr1, "sammed");


        th1.start();
        // System.out.println("id of the thread is = " + th1.getId()); // giving an error
        System.out.println("name of thread is = " + th1.getName());
        
    }
}


class Threadd implements Runnable
{
    
    public void run()
    {
        for(int i = 0; i<100; i++)
        {
            System.out.println("this is thread 11");
        }
    }
}

