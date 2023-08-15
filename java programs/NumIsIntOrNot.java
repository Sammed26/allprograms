import java.util.Scanner;

public class NumIsIntOrNot
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);

        System.out.println("enter a number");
        
        if(scn.hasNextInt())
        {
            System.out.println("given number is integer");
        }
        else
        {
            System.out.println("given number is not an integer");
        }
    }
}