package package1;

// package is like folders where specific type of files we can organise efficiently at one place
// we can also create subpackages in packages also
// all .class files are arraged accordingly as given package names


import package2.Code5;

class Exam extends Code5
{
    void method1()
    {
        // System.out.println(x);
        System.out.println(y);
        // System.out.println(z);
        // System.out.println(a);
    }
}

public class Code1
{
    public static void main(String[] args)
    {
        System.out.println("this is Code1 file in package package1");

        Exam e1 = new Exam();
        e1.method1();

    }
}