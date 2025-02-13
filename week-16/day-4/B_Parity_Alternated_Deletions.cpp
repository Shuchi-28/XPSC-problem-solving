#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n, ans = 0;
    cin >> n;
    vector<vector<int>> a(2);

    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a[x%2].push_back(x);
    }
        
    sort(a[0].rbegin(), a[0].rend());
    sort(a[1].rbegin(), a[1].rend());

    int k = min(a[0].size(), a[1].size());
        
    for (int x: {0,1})
    {
        for (int i=k+1; i<a[x].size(); i++)
        {
            ans += a[x][i];
        }
        
    }
    cout << ans;
    

    return 0;
}
