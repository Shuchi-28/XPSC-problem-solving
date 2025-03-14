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

        vector<int> v(n);

        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        auto ok = [&](int k)
        {
            multiset<int> s;
            for(auto x: v)
            {
                s.insert(x);
            }

            for (int i=1; i<=k; i++)
            {
                if(s.empty())
                    return false;
                int req = k-i+1;

                auto ii = s.upper_bound(req);
                if(ii==s.begin())
                    return false;
                ii--;

                s.erase(ii);
                if(!s.empty())
                {
                    ii = s.begin();
                    int a = (*ii);
                    a += req;
                    s.erase(ii);
                    s.insert(a);
                }
            }

            return true;
            
        };

        int l=0, r=n, mid, ans;
        while (l<=r)
        {
            mid = l + (r-l)/2;
            if(ok(mid))
            {
                l = mid + 1;
                ans = mid;
            }
            else{
                r = mid - 1;
            }
            
        }
        
        cout << ans <<'\n';

    }
    

    return 0;
}
