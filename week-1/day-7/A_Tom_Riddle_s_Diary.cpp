#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    map<string, int> m;
    for (int i=1; i<=t; i++)
    {
        string s;
        cin >> s;
        
        m[s]++;
        if (m[s]==1)
        {
            cout << "NO" <<'\n';
        }
        else{
            cout << "YES" <<'\n';
        }
    }
    

    return 0;
}