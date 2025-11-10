class A{
    static int x = 26;
    final int m = 254515;
}

class B extends A{

    int y = 2;

}

public class Static{
    static {
        A.x = 20;
    }

    static {
        A a1 = new A();
        a1.x = 15;
        System.out.println(A.x);  // 15
    }

    public static void main(String[] args)
    {
        A a1 = new A();
        // a1.m = 34;  
        System.out.println(a1.x);  // 15
        A.x = 2;
        B b1 = new B();
        System.out.println(b1.m);
        System.out.println(A.x);  // 2
    }
}