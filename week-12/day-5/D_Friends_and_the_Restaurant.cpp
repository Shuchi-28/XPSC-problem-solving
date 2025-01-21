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
        int a[n], b[n], diff[n];

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin >> b[i];
            diff[i] = b[i] - a[i];
        }
        
        sort(diff, diff+n);
        int ans = 0;

        int i=0, j=n-1;
        while (i<j)
        {
            if (diff[i]+diff[j]<0)
            {
                i++;
            }
            else{
                ans++;
                i++;
                j--;
            }
        }
        
        cout << ans <<'\n';
    }
    

    return 0;
}
