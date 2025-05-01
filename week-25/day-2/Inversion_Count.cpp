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
        pbds<int> p;
        int n, cnt=0;
        cin >> n;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        for (int i=n-1; i>=0; i--)
        {
            cnt += p.order_of_key(v[i]);
            p.insert(v[i]);
        }
        
        cout << cnt <<'\n';
    }



   return 0;
}
