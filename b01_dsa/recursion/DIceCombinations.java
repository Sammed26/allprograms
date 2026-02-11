import java.util.*;

public class DiceCombinations{
    static int total_combinations = 0;

    public static void dice_com(int target, int curr_sum)
    {
        // base condition
        if(target == curr_sum){
            total_combinations++;
            return;
        }
        if(curr_sum > target){
            return ;
        }

        // dice_com(target, (curr_sum + 1));
        // dice_com(target, (curr_sum + 2));
        // dice_com(target, (curr_sum + 3));
        // dice_com(target, (curr_sum + 4));
        // dice_com(target, (curr_sum + 5));
        // dice_com(target, (curr_sum + 6));

        for(int possibilities = 1; possibilities <= 6; possibilities++)
        {
            dice_com(target, (curr_sum + possibilities));
        }
    }

    public static void main(String[] args)
    {
        int target = 6;
        int curr_sum = 0;
        dice_com(target, curr_sum);

        System.out.println("total combinations = " + total_combinations);
    }

}