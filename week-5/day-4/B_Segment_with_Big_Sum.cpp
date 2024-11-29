#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int l=0, r=0;
    long long int sum = 0;
    int ans = INT_MAX;
    while (r<n)
    {
        sum += a[r];
        if (sum>=k)
        {
            ans = min(ans, r-l+1);
            sum -= a[l];
            l++;
            while(sum<k && r<n)
            {
                r++;
                sum += a[r];
            }
            sum -= a[r];
        }
        else
            r++;
    }
    if(ans==INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    

    return 0;
}
