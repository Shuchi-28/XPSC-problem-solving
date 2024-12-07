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
        int n;
        cin >> n;
        long long k;
        cin >> k;
        int a[n], h[n];
        for (int i = 0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i<n; i++)
        {
            cin >> h[i];
        }

        int l=0, r=0, s=0, ans=0;
        //if(s<=k) ans=1;

        while (r<n)
        {

            if (h[r-1]%h[r]==0)
            {
                s += a[r];
            }
            else{
                s = a[r];
                l=r;
            }
            while (s>k)
            {
                s -= a[l];
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }

        cout << ans <<'\n';

    }
    


    return 0;
}