public class Max_left_right{

    public static void main(String[] args){
        int[] arr = {1,2,4,5,3,9,1,5,6,4};
        int[] left_max = new int[arr.length];
        left_max[0] = 0;
        int l_max = arr[0];
        for(int i = 1; i<arr.length; i++){
            left_max[i] = l_max;
            if(arr[i] > l_max){
                l_max = arr[i];
            }
        }
        

        for(int i = 0; i<left_max.length; i++)
        {
            System.out.print(left_max[i] + " ");
        }
    }
}