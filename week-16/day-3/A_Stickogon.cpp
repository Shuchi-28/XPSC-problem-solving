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
        int n, cnt=0;
        cin >> n;

        map<int, int> mp;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        
        for (auto a: mp)
        {
            if(a.second>2)
                cnt+=a.second/3;
        }
        
        cout << cnt <<'\n';
    }
    

    return 0;
}
