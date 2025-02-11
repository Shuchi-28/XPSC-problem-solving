#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        auto upit = upper_bound(v.begin(), v.end(), x);
        cout << upit-v.begin()-1 <<'\n';
    }
    
        
    return 0;
}
