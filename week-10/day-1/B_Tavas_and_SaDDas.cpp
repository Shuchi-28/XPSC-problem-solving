#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    long long x=0, ans = 0;

    for (int i=0; i<n; i++)
    {
        x += (1LL << i);
    }
    

    for (int i=0; i<n; i++)
    {
        if (s[i]=='7')
        {
            ans += (1LL << (n-i-1));
        }
        
    }

    cout << x+ans; 

    return 0;
}
