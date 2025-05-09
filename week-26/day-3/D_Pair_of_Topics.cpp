#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<long long> a(n), b(n), c(n);

    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    for (int i=0; i<n; i++)
    {
        c[i] = b[i]-a[i];
    }

    pbds<long long> p;
    for (int i=0; i<n; i++)
    {
        c[i] = b[i]-a[i];
    }
    
    long long ans = 0;

    for (int i=0; i<n; i++)
    {
        ans += p.order_of_key(-1*c[i]);
        p.insert(c[i]);
    }
    
    cout << ans;

   return 0;
}
