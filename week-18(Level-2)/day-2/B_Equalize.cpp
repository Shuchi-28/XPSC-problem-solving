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
        long long n, ans = 0;
        cin >> n;
        set<long long> s;

        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        
        vector<long long> a;
        for (auto it: s)
        {
            a.push_back(it);
        }

        for (int i=0; i<a.size(); i++)
        {
            long long x = a[i];
            auto low = lower_bound(a.begin(), a.end(), x+n);
            long long f = low-a.begin()-i;

            ans = max(ans, f);
        }

        cout << ans <<'\n';

    }
    
    return 0;
}
