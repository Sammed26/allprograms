public class Exception_Handling
{
    public static void main(String args[])
    {
        int[] arr = new int[5];

        arr[0] = 1;
        arr[1] = 52;
        arr[2] = 2;
        arr[3] = 12;
        arr[4] = 45;

        try
        {
            System.out.println(arr[5]);
        }
        catch(Exception sam)
        {
            System.out.println("we can't print arr[5] because " + sam);




            
        }
    }
}