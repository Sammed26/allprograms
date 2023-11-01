public class Thread_Priority
{
    public static void main(String args[])
    {
        MyThread th1 = new MyThread();
        MyThread th2 = new MyThread();
        MyThread th3 = new MyThread();
        MyThread th4 = new MyThread();
        MyThread th5 = new MyThread();
        Thread t1 = new Thread(th1, "t1");
        Thread t2 = new Thread(th2, "t2");
        Thread t3 = new Thread(th3, "t3");
        Thread t4 = new Thread(th4, "t4");
        Thread t5 = new Thread(th5, "t5");

        t1.setPriority(Thread.MAX_PRIORITY);
        // t3.setPriority(Thread.NOR_PRIORITY);
        t5.setPriority(Thread.MIN_PRIORITY);

        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();

    }
}

class MyThread implements Runnable
{
    public void run()
    {
        for(int i = 0; i<100; i++)
        {
            System.out.println("thread name is = " + this.getName());
        }
    }
}
