#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i=0; i<n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    
    sort(v.begin(), v.end());

    int round = 1;
    for (int i=0; i<n-1; i++)
    {
        if (v[i].second>v[i+1].second)
        {
            round++;
        }
        
    }
    
    cout << round;
    
    return 0;
}
