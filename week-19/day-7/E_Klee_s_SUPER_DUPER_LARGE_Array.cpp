#include<bits/stdc++.h>
using namespace std;


long long sum(long long l, long long r, long long k)
{
    return (r*(r+1)/2) - ((l*(l-1))/2) + ((r-l+1)*k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        long long l=0, r=n-1, mid, ans=1e18;

        while (l<=r)
        {
            mid = l + (r-l)/2;
            long long x = sum(0, mid, k);
            long long y = sum(mid+1, n-1, k);

            if(x==y)
            {
                ans = 0;
                break;
            }
            if (x <= y)
            {
                l = mid + 1;
                ans = min(ans, abs(x-y));
            }
            else{
                r = mid -1;
                ans = min(ans, abs(x-y));
            }
            

        }
        
        cout << ans <<'\n';

    }
    

    return 0;
}
