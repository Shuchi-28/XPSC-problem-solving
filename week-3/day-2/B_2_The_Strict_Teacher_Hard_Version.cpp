#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        
        vector<int> v(m);
        for (int i=0; i<m; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        while (q--)
        {
            int pos, ans = INT_MAX;
            cin >> pos;
            auto it = upper_bound(v.begin(),v.end(),pos);
            if (it==v.begin())
            {
                ans = v.front()-1;
            }
            else if (it==v.end())
            {
                ans = n - v.back();
            }
            else{
                ans = ((*it - *(it-1))/2);
            }
            cout << ans <<'\n';
        }
        
    }


    return 0;
}