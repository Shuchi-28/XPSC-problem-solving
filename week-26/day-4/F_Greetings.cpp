#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> v(n, vector<int>(2));
        for (int i=0; i<n; i++)
        {
            cin >> v[i][0] >> v[i][1];
        }

        sort(v.begin(), v.end());

        pbds<int> p;
        for (int i=0; i<n; i++)
        {
            p.insert(v[i][1]);
        }
        
        long long ans = 0;
        for (int i=0; i<n; i++)
        {
            ans += p.order_of_key(v[i][1]);
            p.erase(v[i][1]);
        }

        cout << ans <<'\n';
        
    }
     

   return 0;
}
