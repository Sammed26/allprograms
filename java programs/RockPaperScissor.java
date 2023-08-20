import java.util.Scanner;

public class RockPaperScissor
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);

        int yourScore = 0, computersScore = 0;

        System.out.println("\t\t\t Hey Welcome,\n\t\t Let's know who is a player\n");
        System.out.println("how many times you want to play the game\n");
        int totalGameplays = (int)(scn.nextInt());

        while(totalGameplays != 0)
        {
            System.out.println("\t\t\t Your turn");
            System.out.println("\n\t Choose for paper = 0, for rock = 1, for Scissor = 2\n");
            int yourChoice = (int)(scn.nextInt());

            System.out.println("\t\t\t Computer's turn");
            int computersChoice = (int)(Math.random()*3);
            
            if((yourChoice == 0 && computersChoice == 1) || (yourChoice == 1 && computersChoice == 2) ||(yourChoice == 2 && computersChoice == 0))
            {
                System.out.println("\tyou won\n\n");
                yourScore++;
            }
            else if((computersChoice == 0 && yourChoice == 1) || (computersChoice == 1 && yourChoice == 2) ||(computersChoice == 2 && yourChoice == 0))
            {
                System.out.println("\tcomputer won\n\n");
                computersScore++;
            }
            else
            {
                System.out.println("\tgame draw\n\n");
            }


            totalGameplays--;
        }

        if(yourScore > computersScore)
        {
            System.out.println("\t\t\tCONGRATULATIONS...................");
            System.out.printf("\t\t you won the game series\n \t\t\tSYSTUM....\nScores = your score = %d"+ yourScore + "\n\t computer score = %d" + computersScore);

        }
        else if(yourScore < computersScore)
        {
            System.out.println("\t\t\t you lost badly the game series\n \t\tyour SYSTUM.... is Chinease");
        }
        else
        {
            System.out.println("\t Both SYSTUM..... are hanged");
        }

    }
}
