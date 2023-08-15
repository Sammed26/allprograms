import java.util.Scanner;

class TakingInput
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        
        System.out.println("enter number");
        int a = scn.nextInt();
        
        System.out.println("enter decimal number");
        float b = scn.nextFloat();
        
        System.out.println("enter string");
        String name = scn.next();

        System.out.println("enter a sentence");
        String line = scn.nextLine();

        System.out.println(a);
        System.out.println(b);
        System.out.println(name);
        System.out.println(line);

    }
}