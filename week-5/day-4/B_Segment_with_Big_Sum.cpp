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
    int sum = 0, ans = INT_MAX;
    while (r<n)
    {
        sum += a[r];
        if (sum>=k)
        {
            ans += min(ans, r-l+1);
            l--;
        }
        r++;
    }
    cout << ans << '\n';
    

    return 0;
}