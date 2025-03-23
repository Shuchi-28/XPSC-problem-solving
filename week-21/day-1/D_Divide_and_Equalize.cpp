#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        map<int, int> mp;

        for (int i=0; i<n; i++)
        {
            for (int j=2; j*j<=a[i]; j++)
            {
                while (a[i]%j==0)
                {
                    mp[j]++;
                    a[i] /= j;
                }
            }
            if(a[i]>1)
                mp[a[i]]++;

        }

        int flag = 0;

        for(auto x: mp)
        {
            if(x.second%n != 0)
                flag = 1;
        }

        if(flag)
            cout << "NO\n";
        else
            cout << "YES\n";
        
    }
    
    return 0;
}
