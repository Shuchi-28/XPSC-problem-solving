#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() 
{
    int n, m;
    cin >> n >> m;
    pbds<int> a;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    for (int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        cout << a.order_of_key(x+1) << " ";
    }
     


   return 0;
}
