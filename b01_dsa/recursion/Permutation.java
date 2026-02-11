import java.util.*;

public class Permutation{

    public static void display_permut(int[] nums)
    {
        for(int i = 0; i<nums.length; i++)
        {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }

    public static void swap(int ind1, int ind2, int[] nums)
    {
        int temp = nums[ind1];
        nums[ind1] = nums[ind2];
        nums[ind2] = temp;
    }

    public static void Permut(int[] nums, int index)
    {
        // base condition
        if(index == nums.length-1) 
        {
            display_permut(nums);
            return;
        }

        // recursion call
        for(int i = index; i<nums.length; i++)
        {
            swap(index, i, nums);
            Permut(nums, index+1);
            swap(index, i, nums);
        }
    }

    public static void main(String[] args)
    {
        int[] nums = {1, 2, 3};
        int index = 0;
        Permut(nums, index);
    }

}