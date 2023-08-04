#include <iostream>
using namespace std;



int main()
{
    int n;
    cout<<"enter total file number"<<endl;
    cin>>n;
    int array[n], temparr[n];
    cout<<"enter file sizes one by one is sorted format"<<endl;
    for(int s = 0; s<n; s++)
    {
        cin>>array[s];
    }
    int i = 0, j= 0, k= 0;

    temparr[k] = array[i] + array[i+1];

    i = 2;
    while(i<n)
    {
        k++;
        if((temparr[k-1] + array[i]) <= (array[i] + array[i+1]))
        {
            temparr[k] = temparr[k-1] + array[i];
        }
        else
        {
            temparr[k] = array[i] + array[i+1];
            i = i+2;
            while(i<n)
            {
                k++;
                if((temparr[k-1] + array[i]) <= (temparr[k-2] + array[i]))
                {
                    temparr[k] = temparr[k-1] + array[i];
                }
                else
                {
                    temparr[k] = temparr[k-2] + array[i];
                }
                i++;
            }
        }
    }    

    cout<<"optimal way is "<<temparr[k]<<endl;

    return 0;
}