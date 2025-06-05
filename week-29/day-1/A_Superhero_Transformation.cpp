#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s >> t;

    map<char, int> mp = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};

    if(s.size()!=t.size())
    {
        cout << "No\n";
        return 0;
    }

    int flag = 1;
    for (int i=0; i<s.size(); i++)
    {
        if(mp[s[i]] != mp[t[i]])
            flag = 0;
    }
        
    if(flag)
        cout << "Yes\n";
    else
        cout << "No\n";
    

    return 0;
}