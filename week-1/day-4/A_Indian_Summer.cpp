#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] = true;
    }
    
    cout << mp.size() <<'\n';
    

    return 0;
}