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

        vector<long long> v(n);
        long long sum = 0, ans = 0;
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        
        map<int, int> mp;
        long long req = 2*sum/n;

        if((sum-req)*n != sum*(n-2))
        {
            cout << 0 <<'\n';
            continue;
        }
        long long x = 2*sum/n;

        for (int i=0; i<n; i++)
        {
            ans += mp[req - v[i]];
            mp[v[i]]++;
        }
        
        cout << ans <<'\n';

    }
    

    return 0;
}
