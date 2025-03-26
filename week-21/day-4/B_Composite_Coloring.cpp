#include<bits/stdc++.h>
using namespace std;

vector<int> allPirme = {2, 3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        map<int, vector<int>> mp;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<11; j++)
            {
                if(v[i]%allPirme[j]==0)
                {
                    mp[allPirme[j]].push_back(i);
                    break;
                }
            }
        }

        int color = 1;
        vector<int> ans(n);
        for (auto x: mp)
        {
            for(auto y: x.second)
            {
                ans[y] = color;
            }
            color++;
        }

        cout << mp.size() <<'\n';
        
        for (int i=0; i<n; i++)
        {
            cout << ans[i] <<" ";
        }
        cout <<'\n';
        
    }
    

    return 0;
}
