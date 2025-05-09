#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using gpbds = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<long long> v(n);
    pbds<long long> a;
    gpbds<long long> b;
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
        a.insert(v[i]);
    }

    long long x, y, ans=0;
    for (int i=0; i<n; i++)
    {
        a.erase(v[i]);
        y = a.order_of_key(v[i]);
        x = b.order_of_key(v[i]);
        b.insert(v[i]);
        ans += x*y;
    }

    cout << ans;

   return 0;
}
