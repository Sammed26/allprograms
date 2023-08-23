class VariableArguments
{
    // function overloading
    // static int sum(int a, int b)
    // {
    //     return (a+b);
    // }
    // static int sum(int a, int b, int c)
    // {
    //     return (a+b+c);
    // }
    // static int sum(int a, int b, int c, int d)
    // {
    //     return (a+b+c+d);
    // }


    // variable arguments
    static int sum(int ...arr)
    {
        int result = 0;
        for(int element: arr)
        {
            result = result + element;
        }
        return result;
    }


    public static void main(String[] args)
    {

        System.out.println(sum(26, 3));
        System.out.println(sum(26, 3, 8));
        System.out.println(sum(26, 7, 90, 3));
    }
}