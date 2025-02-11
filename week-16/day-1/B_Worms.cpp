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
        if(i!=0)
            v[i] += v[i-1];
    }
    
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);

        cout << it-v.begin()+1 <<'\n';
    }
    
    return 0;
}
