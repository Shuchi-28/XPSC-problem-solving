#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<long long> v(n);

    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    auto ok = [&](int dis)
    {
        int cnt = 1;
        for (int i=0; i<n; i++)
        {
            int j=i+1;
            while (j<n && v[i]+dis>v[j])
                j++;
            if(j==n) 
                break;
            cnt++;
            i = j-1;
        }
        
        return cnt >= k;
    };

    int l=0, r = v[n-1]-v[0] + 10, mid, ans;

    while (l<=r)
    {
        mid = l + (r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
        
    }
    
    cout << ans;

    return 0;
}
