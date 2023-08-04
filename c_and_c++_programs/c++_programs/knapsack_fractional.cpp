#include <iostream>
using namespace std;

struct item
{
    int profit;
    int weight;
    float pbyw;
};

void sort(struct item array[], int size)
{
    int j;
    for(int i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(array[i].pbyw < array[j].pbyw)
            {
                struct item temp;
                temp.profit = array[i].profit;
                temp.weight = array[i].weight;
                temp.pbyw = array[i].pbyw;

                array[i].profit = array[j].profit;
                array[i].weight = array[j].weight;
                array[i].pbyw = array[j].pbyw;

                array[j].profit = temp.profit;
                array[j].weight = temp.weight;
                array[j].pbyw = temp.pbyw;
            }
        }
    }
    for(int k = 0; k<size; k++)
    {
        cout<<array[k].pbyw<<" ";
    }
}

float fractional_knapsack(struct item array[], int total_item, int sack_size)
{
    for(int i = 0; i<total_item; i++)
    {
        array[i].pbyw = float(array[i].profit)/float(array[i].weight);
    }
    sort(array, total_item);

    float profit = 0;
    for(int j = 0; j<total_item; j++)
    {
        if(sack_size > 0)
        {
            if(array[j].weight <= sack_size)
            {
                sack_size = sack_size - array[j].weight;
                profit = profit + array[j].profit;
            }
            else
            {
                profit = profit + ((sack_size/float(array[j].weight))*array[j].profit);
                sack_size = 0;
            }
        }
    }
    //cout<<"sack size is "<<sack_size<<endl;
    return profit;
}

int main()
{
    struct item arr[3];
    arr[0].profit = 25;
    arr[0].weight = 18;

    arr[1].profit = 4;
    arr[1].weight = 15;

    arr[2].profit = 15;
    arr[2].weight = 10;

    float profit = fractional_knapsack(arr, 3, 20);
    cout<<endl<<"total profit is "<<profit<<endl;

    return 0;
}