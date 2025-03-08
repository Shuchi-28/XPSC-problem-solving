#include<bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/371/problem/C

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    long long x, y, z, a, b, c, rr;
    cin >> x >> y >> z >> a >> b >> c >> rr;

    long long b1 = count(s.begin(), s.end(), 'B');
    long long s1 = count(s.begin(), s.end(), 'S');
    long long c1 = count(s.begin(), s.end(), 'C');
    auto ok = [&](long long total)
    {
        long long r1 = max((b1*total)-x, 0LL);
        long long r2 = max((s1*total)-y, 0LL);
        long long r3 = max((c1*total)-z, 0LL);

        long long cost = (r1*a) + (r2*b) + (r3*c);
        return cost <= rr;
    };

    long long l = 0, r = rr+200, mid, ans;

    while (l<=r)
    {
        mid = l+ (r-l)/2;
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
