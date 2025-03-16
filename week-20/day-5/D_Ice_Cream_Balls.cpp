#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long type;
        cin >> type;

        long long l = 1, r = 2e9, mid, ans, midCr;
        while (l<=r)
        {
            mid = l + (r-l)/2;
            midCr = (mid*(mid-1))/2;

            if(midCr <= type)
            {
                l = mid+1;
                ans = mid;
            }
            else{
                r = mid - 1;
            }
            
        }

        long long lCr = (ans*(ans-1))/2;
        long long bal = type - lCr;

        cout << ans+bal <<'\n';
        
    }
    
    

    return 0;
}
