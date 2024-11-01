#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, f;
    cin >> t >> f;
    map<string, string> mp;
    while (t--)
    {
        string s, ip;
        cin >> s >> ip;
        mp[ip] = s;
    }

    while (f--)
    {
        string cm, ip;
        cin >> cm >> ip;
        ip.pop_back();
        cout << cm << " " << ip << "; #" << mp[ip] <<'\n';
    }
    
    

    return 0;
}