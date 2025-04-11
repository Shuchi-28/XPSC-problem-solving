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
        int n, ans= 0;
        cin >> n;

        vector<int> v(n);
        map<int, int> mp;
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        

        for (int i=2; i<=(n*2); i++)
        {
            int cnt = 0;
            for (auto j: mp)
            {
                int other = i - j.first;
                if(other>=1 && mp.count(other))
                    cnt += min(j.second, mp[other]);
            }
            cnt /= 2;

            ans = max(ans, cnt);
        }
       

        cout << ans <<'\n';
    }
    

    return 0;
}
