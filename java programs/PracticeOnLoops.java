import java.util.Scanner;

public class PracticeOnLoops
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);

        {
            // problem 1
            System.out.println("enter number");
            int n = scn.nextInt();

            int i = 1;
            while(i <= n)
            {
                int j = n-i+1;
                while(j != 0)
                {
                    System.out.print("*");
                    j--;
                }
                System.out.printf("\n");
                i++;
            }
        }

        {
            System.out.println("enter number to find factorial of ");
            int n = scn.nextInt();

            long factorial = 1;
            for(int i = n; i>=1; i--)
            {
                factorial = factorial*i;
            }
            
            System.out.println("factorial of " + n + " is " + factorial);
        }

    }
}