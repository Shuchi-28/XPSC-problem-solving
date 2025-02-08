#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    long long ans = 0;
    int j = 0;
    map<int, int> mp;
    for (int i=0; i<n; i++)
    {
        while (j<n && (mp.size()<k || mp.count(v[j])>0))
        {
            mp[v[j]]++;
            j++;
        }
        ans += j-i;
        mp[v[i]]--;
        if (mp[v[i]]==0)
            mp.erase(v[i]);
        
    }
    
    cout << ans;


    return 0;
}
