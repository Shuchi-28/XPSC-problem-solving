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
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        int mn1 = 0;
        for (int i=0; i<n-1; i++)
        {
            mn1 = max(mn1, v[i+1]-v[i]);
        }
        
        mn1 = max(mn1, v[0]-0);

        int ans = max(mn1, 2*(x-v[n-1]));

        cout << ans <<'\n';
    }
    


    return 0;
}