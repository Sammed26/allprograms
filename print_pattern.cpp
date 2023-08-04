#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    
    int i = 1;
    while(i <= n)
    {
    	int before_space = i-1, k = 0;
    	while(k != before_space)
    	{
    		cout<<n-k;
    		k++;
		}
    	int j = n+(n-1) - (2*i - 2);
    	while(j != 0)
    	{
    		cout<<(n-i+1);
    		j--;
		}
		int after_space = (n-i+2);
		while(before_space != 0)
		{
			cout<<after_space;
			after_space++;
			before_space--;
		}
	
		cout<<endl;
		i++;
	}


    return 0;
}
