#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int m=3, x;
        cin >> x;

        map<string, vector<int>> mp;

        for (int i=1; i<=m; i++)
        {
            for (int j=1; j<=x; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(4);
        for (auto x : mp)
        {
            vector<int> v = x.second;
            if (v.size()==1)
            {
                ans[v[0]] += 3;
            }
            if (v.size()==2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
            
        }
        for (int i=1; i<=3; i++)
        {
            cout << ans[i] << " ";
        }
        
        cout << '\n';
    }
    

    return 0;
}