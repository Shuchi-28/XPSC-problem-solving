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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> a(n);
        vector<int> b(n);

        for (int i=0; i<n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        
        map<int, int> mp;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i=0; i<n; i++)
        {
            mp[a[i].second] = b[i];
        }
        
        for (auto x: mp)
        {
            cout << x.second <<" ";
        }
        
        cout <<'\n';

    }
    

    return 0;
}