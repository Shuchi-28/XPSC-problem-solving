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
    
    int n;
    cin >> n;
    
    string s, r;
    cin >> s;
    r = s;
    reverse(r.begin(), r.end());

    map<char, vector<int>> posr, poss;
    for (int i=0; i<n; i++)
    {
        poss[s[i]].push_back(i);
        posr[r[i]].push_back(i);
    }
    
    vector<int> permutation(n);
    for (char ch='a'; ch<='z'; ch++)
    {
        for (int i=0; i<poss[ch].size(); i++)
        {
            permutation[posr[ch][i]] = poss[ch][i];
        }
    }
    
    pbds<int> p;
    long long ans = 0;

    for (int i=n-1; i>=0; i--)
    {
        ans += p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    
    cout << ans <<'\n';


   return 0;
}
