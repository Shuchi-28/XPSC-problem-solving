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

        vector<long long> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if(n==1)
        {
            cout << 1 <<'\n';
            continue;
        }
        vector<long long> diff(n);
        for (int i=0; i<n; i++)
        {
            diff[i] = a[n-1]-a[i];
        }
        
        long long x = 0;

        for (int i=0; i<n; i++)
        {
            x = __gcd(x, diff[i]);
        }
        
        long long ans = 0;

        for (int i=0; i<n; i++)
        {
            ans += diff[i]/x;
        }
        
        set<long long> st;
        for (int i=0; i<n; i++)
        {
            st.insert(a[i]);
        }
        
        int step = 1;
        while (true)
        {
            int p = a[n-1] - (step*x);

            if(st.find(p)==st.end())
                break;
            step++;
        }
        
        cout << ans+min(n, step) <<'\n';
        
        
    }
    


    return 0;
}
