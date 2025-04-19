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
        long long n, c, d;
        cin >> n >> c >> d;

        vector<long long> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end(), greater<long long>());

        auto ok = [&](long long k)
        {
            long long sum = 0, gain = 0;
            if(k==0)
                return(v[0]*d>=c);

            if(k>=n)
            {
                for (int i=0; i<n; i++)
                {
                    sum += v[i];
                }
            }
            else{
                for (int i=0; i<k; i++)
                {
                    sum += v[i];
                }
            }
            
            long long times = d/k;
            gain = times * sum;

            long long rem = d%k;
            if(rem>=n)
            {
                for (int i=0; i<n; i++)
                {
                    gain += v[i];
                }
            }
            else {
                for (int i=0; i<rem; i++)
                {
                    gain += v[i];
                }
            }

            return (gain>=c);
            
        };

        long long sum = 0;
        for (int i=0; i<min(d,n); i++)
        {
            sum += v[i];
        }

        if(sum>=c)
        {
            cout << "Infinity\n";
            continue;
        }

        long long l = 0, r= 1e12, mid, ans = -1;

        while (l<=r)
        {
            mid = l + (r-l)/2;
            if(ok(mid+1))
            {
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        
        if(ans == -1)
        {
            cout << "Impossible\n";
        }
        else{
            cout << ans <<'\n';
        }
        

    }
    


    return 0;
}
