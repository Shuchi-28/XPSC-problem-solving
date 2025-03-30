#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n, ans=1;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if(a[i]!=1)
            ans = max(ans, mp[a[i]]);
    }

    if(n==1)
    {
        cout << 1;
        return 0;
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=2; j*j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                mp[j]++;
                ans = max(ans, mp[j]);
                if(a[i]/j != j)
                {
                    mp[a[i]/j]++;
                    ans = max(ans, mp[a[i]/j]);
                }
            }
        }
    }
    
    cout << ans;
    

    return 0;
}
