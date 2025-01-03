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
        int arr[n];

        map<long long int, long long int> mp;
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
            int x = __lg(arr[i]) + 1;
            mp[x]++;
        }
        
        long long int ans = 0;
        for(auto a: mp)
        {
            long long int s= a.second;
            ans += s*(s-1)/2;
        }

        cout << ans <<'\n';

    }
    

    return 0;
}
