
class MyThread1 implements Runnable{
    public void run()
    {
        for(int i = 0; i<100; i++)
        {
            System.out.println("this is thread 1 1");
        }
    }
}
class MyThread2 implements Runnable{
    public void run()
    {
        for(int i = 0; i<100; i++)
        {
            System.out.println("this is thread 2 2");
        }
    }
}

public class ThreadUsingRunnableInterface{
    public static void main(String[] args)
    {
        MyThread1 MT1 = new MyThread1();
        // MT1.start();  // you can't call directly like this, this gives eror
        Thread T1 = new Thread(MT1);

        MyThread2 MT2 = new MyThread2();
        Thread T2 = new Thread(MT2);

        T1.start();
        T2.start();

    }
}