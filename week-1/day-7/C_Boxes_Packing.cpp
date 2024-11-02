#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    cin >> n;
    map<int, int> m;
    while (n--)
    {
        int x;
        cin >> x;
        m[x]++;
        ans = max(m[x], ans);
    }
    
    cout << ans;

    return 0;
}