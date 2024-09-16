#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

{
// printing *
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}

{
// printing number
// 1
// 22
// 333
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i = i+1;
    }
}

{
// printing number
// 1
// 23
// 456
    int i = 1;
    int count = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }

}

{
// printing numbers
// 1
// 2 3
// 3 4 5
// 4 5 6 7
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j <= i)
        {
            cout<<j+i-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

{
// printing numbers
// 1
// 2 1
// 3 2 1
// 4 3 2 1 

    int i = 1;
    while(i<= n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}

{
// printing characters
// AAA
// BBB
// CCC

    int i = 1; 
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            char ch = 64 + i;  // ASCII value 
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

}


{
// printing characters
// ABC
// ABC
// ABC

    int i = 1; 
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            char ch = 64 + j;  // ASCII value 
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

}


{
// printing characters
// ABC
// DEF
// GHI
    cout<<"printing ===="<<endl;
    int i = 1; 
    char ch = 'A';  // ASCII value 
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

}


{
// printing characters
// ABC
// BCD
// CDE
    cout<<"printing ===="<<endl;
    int i = 1; 
    while(i<=n)
    {
        int j = 1;
        char ch = 'A' + i - 1;  // ASCII value 
        while(j<=n)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

}

{
// printing characters
// A
// BB
// CCC
    cout<<"printing ===="<<endl;
    int i = 1; 
    while(i<=n)
    {
        int j = 1;
        char ch = 'A' + i - 1;  // ASCII value 
        while(j<=i)
        {
            cout<<ch;
            j++;
        }
        ch++;
        cout<<endl;
        i++;
    }

}

{
// printing characters
// A
// BC
// DEF
    cout<<"printing ===="<<endl;
    int i = 1; 
    char ch = 'A';  // ASCII value 
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

}

{
// printing characters
// A
// BC
// CDE
// DEFG
    cout<<"printing ===="<<endl;
    int i = 1; 
    while(i<=n)
    {
        int j = 1;
        char ch = 'A' + i - 1;  // ASCII value 
        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

}

{
// printing characters
// D
// CD
// BCD
// ABCD
    cout<<"printing ===="<<endl;
    int i = 1; 
    while(i<=n)
    {
        int j = 1;
        char ch = 'A' + n  - i;  // ASCII value 
        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

}

{
// printing stars
//    *
//   **
//  ***
// ****
    cout<<"printing-----"<<endl;
    int i = 1;
    while(i<=n)
    {
        int space = n-i;
        while(space != 0)  // first print total spaces in one line
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while(j <= i)  // after printing spaces cursor is now at position from where we want to print stars. print stars
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}

{
// printing stars
// ****
// ***
// **
// *
    cout<<"printing-----"<<endl;
    int i = 1;
    while(i<= n)
    {
        int j = n-i+1;
        while(j != 0)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}

{
// printing stars
// ****
//  ***
//   **
//    *
    cout<<"printing----"<<endl;
    int i = 1;
    while(i<=n)
    {
        int spaces = i-1;
        while(spaces)  // decreasing spaces so when spaces == 0 it goes out of loop
        {
            cout<<" ";
            spaces--;
        }
        int j = n-i+1;
        while(j != 0)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}

{
//    1
//   121
//  12321
// 1234321

    int i = 1;
    while(i<= n)
    {
        int spaces = n-i;
        while(spaces)
        {
            cout<<" ";
            spaces--;
        }
        int j = 1;
        while(j <= i)
        {
            cout<<j;
            j++;
        }
        int k = i-1;
        while(k>0)
        {
            cout<<k;
            k--;
        }

        cout<<endl;
        i++;
    }

}


{
/*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/
    cout<<"printing -------------"<<endl;

    int i = 1;
    while(i<=n)
    {
        int j = n-i+1;
        int num = 1;
        while(j)
        {
            cout<<num;
            num++;
            j--;
        }
        int stars = n-num;
        while(stars >= 0)
        {
            cout<<"*";
            stars--;
        }
        stars = n-num;
        while(stars >= 0)
        {
            cout<<"*";
            stars--;
        }
        num--;  // because num is num + 1 now
        while(num >0)
        {
            cout<<num;
            num--;
        }
        cout<<endl;
        i++;
    }


}


    return 0;
}