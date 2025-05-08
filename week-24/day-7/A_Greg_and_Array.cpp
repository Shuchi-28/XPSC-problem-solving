#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long>v(100005);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector<int> l(100005), r(100005), d(100005);
    for (int i=0; i<m; i++)
    {
        int ll, rr, dd;
        cin >> ll >> rr >> dd;
        ll--;
        rr--;
        l[i] = ll;
        r[i] = rr;
        d[i] = dd;
    }

    vector<long long>qu(100005), ans(100005);
    for (int i=0; i<k; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        qu[x]++;
        qu[y+1]--;
    }
        
    for (int i=1; i<=m; i++)
    {
        qu[i] += qu[i-1];
    }

    for (int i=0; i<m; i++)
    {
        int ll = l[i];
        int rr = r[i];
        int dd = d[i];
        rr++;
        ans[ll] += dd*qu[i];
        ans[rr] -= dd*qu[i];
    }

    for (int i=1; i<=n; i++)
    {
        ans[i] += ans[i-1];
    }
    for (int i=0; i<n; i++)
    {
        cout << ans[i]+v[i] << " ";
    }
                
    return 0;
}
