#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string word;
        cin >> word;
        int st1=0, st2=0;
        for (int i=0; i<n; i++)
        {
            if (word[i]=='B')
            {
                st1 = i-1;
                break;
            } 
        }
        for (int i=n-1; i>=0; i--)
        {
            if (word[i]=='B')
            {
                st2 = i;
                break;
            } 
        }
        cout << st2 - st1 << endl;
        
    }
    

    return 0;
}