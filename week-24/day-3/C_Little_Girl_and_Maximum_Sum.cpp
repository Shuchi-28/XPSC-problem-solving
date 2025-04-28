#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
        
    vector<long long> dif(n+1);
    for (int i=0; i<q; i++)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;
        dif[l]++;
        dif[r+1]--;
    }
        
    for (int i=1; i<=n; i++)
    {
        dif[i] = dif[i-1]+dif[i];
    }
    sort(arr.rbegin(), arr.rend());
    sort(dif.rbegin(), dif.rend());

    int long long ans = 0;
    for (int i=0; i<n; i++)
    {
       ans += (1LL*arr[i]*dif[i]);
    }
        
    cout << ans;
        
    
    return 0;
}
