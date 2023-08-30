public class ForEachLoop
{
    public static void main(String[] args)
    {
        newMethod();
        int[] array = {26, 4, 5, 3 , 5};

        for(int element: array)
        {
            System.out.println(element);
        }
    }
    public static void newMethod()
    {
        System.out.println("hello");
    }
}

