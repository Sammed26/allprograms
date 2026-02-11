public class Print_n_to_1{
    public static void print(int n)
    {
        // base condition
        if(n == 0) return ;

        print(n-1);
        System.out.println(n);
    }

    public static void main(String[] args)
    {
        // print from n to 1
        print(7);
    }

}