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
        int n, m;
        cin >> n >> m;
        
        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        
        long long ans=n;
        for (int i=1; i<n; i++)
        {
            ans+= max(v[i-1], v[i]);
        }

        ans += max(v[n-1], v[0]);
        
        if(ans<=m)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
    

    return 0;
}
