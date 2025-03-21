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
        int h, n;
        cin >> h >> n;

        vector<long long> a(n), c(n);

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin >> c[i];
        }

        auto ok = [&](long long mid)
        {
            long long hh = 0;
            for (long long i=0; i<n; i++)
            {
                long long total = (mid-1)/c[i];
                total += 1LL;
                hh += total*a[i];
                if(hh>=h)
                    break;
            }
            
            return hh>= h;
        };

        long long l = 1, r = 1e12, ans=0, mid;
        while (l<=r)
        {
            mid = l + (r-l)/2;
            if(ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
            
        }
        
        cout << ans <<'\n';
        
    }
    


    return 0;
}
