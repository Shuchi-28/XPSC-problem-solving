#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;

        if (mp.find(s) != mp.end())
        {
            cout << s << mp[s] <<endl;
            mp[s]++;
        }
        else{
            mp[s]++;
            cout << "OK" <<endl;
        }
    }
    

    return 0;
}