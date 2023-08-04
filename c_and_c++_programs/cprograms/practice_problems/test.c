#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    static int greatest, greatest2;
    
    for(int j =0; j<n; j++)
    {
        
        if(arr[j] > arr[j+1])
        {
            greatest = j;
        }
    }
    for(int k = 0; k < n; k++)
    {
        
        if(k != greatest)
        {
            
        if(arr[k] > arr[k+1] )
        {
            
            greatest2 = k;
        }
        }
    }
    
    if(arr[greatest2] > 10)
    {
        for(int r = greatest2; r < n; r++)
        {
            arr[r] = arr[r + 1];
           
        }
         n--;
    }
    else
    {
        int a = 0, b = greatest2 - 1;
        while(a != (greatest2 - 1)/2)
        {
            int temp = arr[a];
            arr[a] = arr[b];
                arr[a] = temp;
            a++;
            b--;
        }
    }
    for(int m = 0; m < n; m++)
    {
        printf("%d\t", arr[m]);
    }
    return 0;
}