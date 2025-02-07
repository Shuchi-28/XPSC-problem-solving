#include<bits/stdc++.h>
using namespace std;

void division(long long i, long long n, long long sum1, long long sum2, vector<long long> &v, long long &mi)
{
    if(i==n)
    {
        mi = min(mi, abs(sum1-sum2));
        return;
    }
    division(i+1, n, sum1+v[i], sum2, v, mi);
    division(i+1, n, sum1, sum2+v[i], v, mi);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, mi = LONG_LONG_MAX ;
    cin >> n;
    vector<long long> v(n);

    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    division(0, n, 0, 0, v, mi);
    
    cout << mi;
    
    return 0;
}
