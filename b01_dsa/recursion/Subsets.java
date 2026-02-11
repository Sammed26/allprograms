import java.util.*;

public class Subsets{

    static void get_all_subsets(int[] nums, ArrayList<Integer> result, int index)
    {
        // base condition
        if(index >= nums.length)
        {
            System.out.println(result);
            return ;
        }

        // exclude
        get_all_subsets(nums, result, index+1);

        // include
        result.add(nums[index]);
        get_all_subsets(nums, result, index+1);
        result.remove((Object)nums[index]);
    }

    public static void main(String[] args)
    {
        int[] nums = {1, 2, 3};
        int index = 0;
        ArrayList<Integer> result = new ArrayList<>();
        get_all_subsets(nums, result, index);
    }

}