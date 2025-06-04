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
        long long mxdiff = 0, mxele = 0, ans = 0;
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        for (int i=0; i<n; i++)
        {
            mxele = max(mxele,1LL* v[i]);
            mxdiff = max(mxdiff,1LL* mxele-v[i]);

            ans += mxele-v[i];
        }
        
        ans += mxdiff;

        cout << ans <<'\n';
    }
    


    return 0;
}