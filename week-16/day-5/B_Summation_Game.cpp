#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> v(n);
        vector<int> pre(n+1);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        for (int i=1; i<=n; i++)
        {
            pre[i] = pre[i-1]+v[i-1];
        }
        
        int ans = INT_MIN;
        for (int i=0; i<=k; i++)
        {
            int remain = n-i;
            int neg = min(remain, x);

            int ans1 = pre[remain]- 2*(pre[remain]-pre[remain-neg]);
            ans = max(ans, ans1);
        }
        
        cout << ans <<'\n';
    }
    


    return 0;
}
