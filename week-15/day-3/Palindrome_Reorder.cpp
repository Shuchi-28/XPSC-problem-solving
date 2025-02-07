#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, c, ans="";
    cin >> s;

    map<char, int> mp;
    for (int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }

    int flag = 0;
    for (auto it: mp)
    {
        if (it.second%2==1)
        {
            flag++;
            c = it.first;
        }
    }
    if (flag>1)
    {
        cout << "NO SOLUTION";
    }
    else{
        for (auto it: mp)
        {
            for (int i=0; i<it.second/2; i++)
            {
                ans.push_back(it.first);
            }
        }
        s = ans;
        s += c;
        reverse(ans.begin(), ans.end());
        s += ans;
        
        cout << s;
        
    }
    
    
    return 0;
}
