#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;
    cin >> k >> n;

    vector<long long> v(n);
    long long total_stu = 0;
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
        total_stu += v[i];
    }

    auto ok = [&](long long council)
    {
        long long need_stu = council*k;
        for (int i=0; i<n; i++)
        {
            need_stu -= min(council, v[i]);
        }
        
        return need_stu<=0;
        
    };
    
    long long l=0, r=(total_stu/k), mid, ans;
    while (l<=r)
    {
        mid = l + (r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    
    cout << ans;
    
    
    return 0;
}
