#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<long, long> mp;
    for (int i=0; i<n; i++)
    {
        long long l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    
    int ans=INT_MIN, sum = 0;
    for(auto x: mp)
    {
        sum += x.second;
        ans = max(ans, sum);
    }

    cout << ans;
    

    return 0;
}
