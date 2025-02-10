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

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        auto lowit = lower_bound(v.begin(), v.end(), x);
        auto upit = upper_bound(v.begin(), v.end(), x);
        if (lowit == v.begin())
            cout << "X ";
        else 
            cout << *(--lowit) <<" ";
            
        if (upit == v.end())
            cout << "X\n";
        else 
            cout << *upit <<'\n';
        
    }

    
    return 0;
}
