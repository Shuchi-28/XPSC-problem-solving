#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> mp;
        int mn = INT_MAX;

        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            mn = min(mn, v[i]);
        }
        
        if(mp[mn]==1)
        {
            cout << "YES\n";
        }
        else{
            int f = 0;
            for (int i=0; i<n; i++)
            {
                if(v[i]%mn != 0)
                    f = 1;
            }
            if(f)
                cout << "YES\n";
            else
                cout << "NO\n";

        }
        
    }


    return 0;
}
