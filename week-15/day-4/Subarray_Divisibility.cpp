#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    long long sum = 0, cnt = 0;
    map<long long, int> mp;
    mp[0]++;
    for (int i = 0; i<n; i++)
    {
        sum += v[i]%n;
        sum = (sum+n)%n;
        cnt += mp[sum];
        mp[sum]++;
    }
    
    cout << cnt;

    return 0;
}
