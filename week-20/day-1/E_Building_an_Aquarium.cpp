#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<long long> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        auto ok = [&](long long h)
        {
            long long cnt = 0;
            for (int i=0; i<n; i++)
            {
                cnt += h - min(h, v[i]);
            }
            return cnt<= x;

        };

        long long l=1, r=1e11, mid, ans;
        while (l<=r)
        {
            mid = l + (r-l)/2;
            if(ok(mid))
            {
                l = mid + 1;
                ans = mid;
            }
            else{
                r = mid - 1;
            }
            
        }
        
        cout << ans <<'\n';

    }
    

    return 0;
}
