import java.util.Scanner;

public class PercentageCalculator {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("enter marks of subject 1");
        float marks1 = sc.nextFloat();

        System.out.println("enter marks of subject 2");
        float marks2 = sc.nextFloat();

        System.out.println("enter marks of subject 3");
        float marks3 = sc.nextFloat();

        System.out.println("enter marks of subject 4");
        float marks4 = sc.nextFloat();

        System.out.println("enter marks of subject 5");
        float marks5 = sc.nextFloat();

        float percentage = ((marks1 + marks2 + marks3 + marks4 + marks5)/500)*100;

        System.out.println("percentage is " + percentage + "%");

    }
}
