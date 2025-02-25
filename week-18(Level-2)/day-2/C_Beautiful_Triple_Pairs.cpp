#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, ans =0;
        cin >> n;

        map<tuple<ll, ll, ll>, ll>mp;
        vector<ll> v(n);

        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        for (ll i=0; i<n-2; i++)
        {
            ans += (mp[{v[i], v[i+1], -1}]+ mp[{v[i], -1, v[i+2]}]+ mp[{-1, v[i+1], v[i+2]}] - 3*mp[{v[i], v[i+1], v[i+2]}]);
            mp[{v[i], v[i+1], -1}]++;
            mp[{v[i], -1, v[i+2]}]++;
            mp[{-1, v[i+1], v[i+2]}]++;
            mp[{v[i], v[i+1], v[i+2]}]++;
        }
        
        cout << ans <<'\n';

    }
    
    

    return 0;
}
