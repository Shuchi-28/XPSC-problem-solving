#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> m;
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        auto xx = max_element(m.begin(), m.end(), [](const pair<int, int>& a, const pair<int, int>& b) -> bool {return a.second < b.second;});
        
        int mx = xx->second;
        int opp = 0;
        while (mx<n)
        {
            int f = mx;
            opp++;
            int spp = n-mx;
            if (spp >= f)
            {
                mx += f;
                opp += f;
            }
            else{
                mx += spp;
                opp += spp;
            }
        }
        
        cout << opp <<endl;
    }


    return 0;
}
