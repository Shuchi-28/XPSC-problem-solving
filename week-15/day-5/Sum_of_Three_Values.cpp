#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<pair<long long, int>> v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    
    sort(v.begin(), v.end());
    for (int i=0; i<n; i++)
    {
        long long x2 = x-v[i].first;
        for (int j=i+1, k=n-1; j<k; j++)
        {
            while (v[j].first+v[k].first>x2)
                k--;
            if (j<k && v[j].first+v[k].first==x2)
            {
                cout << v[i].second << " " << v[j].second << " " << v[k].second;
                return 0;
            }    
        }
    }
    
    cout << "IMPOSSIBLE";

    return 0;
}
