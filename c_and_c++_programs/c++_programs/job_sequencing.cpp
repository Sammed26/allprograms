#include <iostream>
using namespace std;

struct job
{
    int id;
    int deadline;
    int profit;
};

void sort(struct job array[], int size)
{
    int i, j;
    for(i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(array[i].profit < array[j].profit)
            {
                struct job temp;
                temp.id = array[i].id;
                temp.deadline = array[i].deadline;
                temp.profit = array[i].profit;

                array[i].id = array[j].id;
                array[i].deadline = array[j].deadline;
                array[i].profit = array[j].profit;

                array[j].id = temp.id;
                array[j].deadline = temp.deadline;
                array[j].profit = temp.profit;
            }
        }
    }
}

int min(int a, int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

void sequence(struct job arr[], int tjobs)
{
    sort(arr, tjobs);
    int max_deadline = arr[0].deadline;
    int i;
    for(i = 0; i<tjobs; i++)
    {
        if(arr[i].deadline > max_deadline)
        {
            max_deadline = arr[i].deadline;
        }
    }
    bool slot[max_deadline];
    for(int s = 0; s<max_deadline; s++)
    {
    	slot[s] = false;
	}
    int takenjobs[max_deadline];

    int j, k;
    for(j = 0; j <tjobs; j++)
    {
        for(k = min(arr[j].deadline, tjobs) - 1; k >= 0; k--)
        {
            if(slot[k] == false)
            {
                takenjobs[k] = j;
                slot[k] = true;
                break;
            }
        }
    }

	float tprofit = 0;
    for(i = 0; i<max_deadline; i++)
    {
    	tprofit = tprofit + arr[takenjobs[i]].profit;
        cout<<arr[takenjobs[i]].id<<" ";
    }
    cout<<endl<<"total profit is "<<tprofit<<endl;

}

int main()
{
    struct job arr[4];

    arr[0].id = 1;
    arr[0].deadline = 2;
    arr[0].profit = 100;

    arr[1].id = 2;
    arr[1].deadline = 2;
    arr[1].profit = 80;

    arr[2].id = 3;
    arr[2].deadline = 1;
    arr[2].profit = 50;

    arr[3].id = 4;
    arr[3].deadline = 3;
    arr[3].profit = 10;

    sequence(arr, 4);

return 0;
}



