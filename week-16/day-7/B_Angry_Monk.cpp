#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, k, ans=0;;
        cin >> k >> n;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int i=0; i<n-1; i++)
        {
            ans += v[i]+v[i]-1;
        }
        
        cout << ans <<endl;
    }

    return 0;
}
