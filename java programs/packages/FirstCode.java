package onepackage;

// package is like folders where specific type of files we can organise efficiently at one place
// we can also create subpackages in packages also
// all .class files are arraged accordingly as given package names


import secondpackage.FourthCode;

public class FirstCode
{
    public static void main(String[] args)
    {
        System.out.println("this is FirstCode file in package onepackage");
        FourthCode Code4th = new FourthCode();

        Code4th.newClassMethod();
    }
}