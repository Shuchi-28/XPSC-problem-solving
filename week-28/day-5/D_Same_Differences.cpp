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

        map<int, int> mp;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            mp[x-i]++;
        }
        
        long long ans = 0;
        for(auto a: mp)
        {
            long long cnt = a.second;
            ans += (cnt*(cnt-1))/2;
        }
        
        cout << ans <<'\n';

    }


    return 0;
}
