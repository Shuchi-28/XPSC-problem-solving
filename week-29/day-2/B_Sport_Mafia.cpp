#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    long long l=0, r=n, ans;
    while (l<=r)
    {
        long long mid = l + (r-l)/2;
        long long ok = (((n-mid)*(n-mid+1))/2)-mid;
        if(ok == k)
        {
            ans = mid;
            break;
        }
        else if (ok<k)
            r = mid - 1;
        else
            l = mid + 1;
    }
        
    cout << ans;
    

    return 0;
}