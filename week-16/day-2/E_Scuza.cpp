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
        int n, q;
        cin >> n >> q;
        vector<long long> v(n+1);
        vector<long long> pre(n+1);
        vector<long long> mxlen(n+1);
        for (int i=1; i<=n; i++)
        {
            cin >> v[i];
            pre[i] = pre[i-1]+v[i];
            mxlen[i] = max(mxlen[i-1], v[i]);
        }
        
        while (q--)
        {
            long long x, ans=0;
            cin >> x;
            
            auto it = upper_bound(mxlen.begin(), mxlen.end(), x);
            long long pos = it-mxlen.begin()-1;

            if(pos>=0)
                ans = pre[pos];
            cout << ans <<" ";
            
        }
        
        cout << '\n';
    }
    

    return 0;
}
