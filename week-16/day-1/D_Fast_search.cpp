#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        auto lowit = lower_bound(v.begin(), v.end(), l);
        auto upit = upper_bound(v.begin(), v.end(), r);

        cout << (upit-lowit) <<" ";
        
    }
    
        
    return 0;
}
