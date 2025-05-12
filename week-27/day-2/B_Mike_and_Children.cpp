#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    map<long long, int> mp;
    
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            mp[v[i]+v[j]]++;
        }
    }
    
    int ans=0;
    for (auto x: mp)
    {
        ans = max(ans, x.second);
    }

    cout << ans;
    

    return 0;
}
