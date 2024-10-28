#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B, T;
    cin >> A >> B >> T;

    T = T + 0.5;
    int ans = 0;
    for (int i=A; i<=T; i+=A)
    {
        ans += B;
    }
    
    cout << ans << '\n';

    return 0;
}