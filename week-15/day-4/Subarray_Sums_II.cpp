#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x, sum = 0, ans=0;
    cin >> n >> x;

    map<long long, long long> mp;
    mp[0] = 1;

    vector<int> v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    for (int i=0; i<n; i++)
    {
        sum += v[i];
        ans += mp[sum-x];
        mp[sum]++;
    }
    
    cout << ans;

    
    return 0;
}
