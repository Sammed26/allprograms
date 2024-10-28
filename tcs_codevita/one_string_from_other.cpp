#include <bits/stdc++.h>

using namespace std;

int ocount = 0; 
int rcount = 0; 


int get_substring(const string &s1, const string &s2, const string &s3, int start, bool &isReversed) 
{

    int n = s1.length();
    int maxLen = 0;
    int len1 = s2.length();
    int len2 = s3.length();

    for (int i = 0; i < len1; ++i) 
    {
        int j = 0;

        while (i + j < len1 && start + j < n && s2[i + j] == s1[start + j]) 
        {
            j++;
        }
        if (j > maxLen) 
        {
            maxLen = j;
            isReversed = false;
        }
    }


    for (int i = 0; i < len2; ++i) 
    {
        int j = 0;
        while (i + j < len2 && start + j < n && s3[i + j] == s1[start + j]) 
        {
            j++;
        }
        if (j > maxLen) 
        {
            maxLen = j;
            isReversed = true;
        }
    }

    return maxLen;
}

int main() {
    string s1;
    cin >> s1;

    string s2; 
    cin >> s2;

    int s, r;
    cin >> s >> r;


    string s3 = s2;
    reverse(s3.begin(), s3.end());

    int s1index = 0;
    int totalCost = 0;

    while (s1index < s1.length()) 
    {
        bool isReversed = false;
        int ans = get_substring(s1, s2, s3, s1index, isReversed);

   
        if (ans == 0) 
        {
            cout << "Impossible" << endl;
            return 0;
        }

       
        if (isReversed) 
        {
            rcount++;
            totalCost += r;
        } 
        else 
        {
            ocount++;
            totalCost += s;
        }

    
        s1index += ans;
    }

    
    cout << totalCost << endl;

    return 0;
}
