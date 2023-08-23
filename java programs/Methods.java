public class Methods
{
    // writing static means we can use this in any other static method without creating object of it
    static int sum(int a, int b)
    {
        return (a+b);
    }

    public static void main(String[] args)
    {
        // methods are like functions but most accurately we call method to which, which is written inside a class
        System.out.println(sum(26, 5));
        System.out.println(sum(12, 12));

    }
}