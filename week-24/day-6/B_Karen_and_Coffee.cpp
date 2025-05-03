#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> v(2e5+10, 0), good(2e5+10, 0);
    for (int i=0; i<n; i++)
    {
        int l, r;
        cin >> l >> r;
        v[l]++;
        v[r+1]--;
    }
        
    for (int i=1; i<2e5+10; i++)
    {
        v[i]= v[i]+v[i-1];
    }
    for (int i=0; i<2e5+10; i++)
    {
        if(v[i]>=k)
            good[i] = 1;
    }
    for (int i=1; i<2e5+10; i++)
    {
        good[i]= good[i]+good[i-1];
    }

    for (int i=0; i<q; i++)
    {
        int l, r, sum=0;
        cin >> l >> r;
        
        cout << good[r] - good[l-1] << '\n';
    }
        
    
    return 0;
}
