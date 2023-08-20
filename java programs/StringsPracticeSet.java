import java.util.Scanner;

public class StringsPracticeSet
{
    public static void main(String[] args)
    {
        String name = "SAmmED";
        String lowercaseString = name.toLowerCase();
        System.out.println(lowercaseString);

        String str = "  shree koshti  ";
        String replacedStr = str.replace(" ", "_");
        System.out.println(replacedStr);

        String templateSentence = "Dear {name}, thanks a lot";
        String actualSentence = templateSentence.replace("{name}", name.toLowerCase());
        System.out.println(actualSentence);

        String sentence = "Hi  how are you? I think   it's going well";
        System.out.println("double space starts from " + sentence.indexOf("  ") + " index");
        System.out.println("triple space starts from " + sentence.indexOf("   ") + " index");
    }
}