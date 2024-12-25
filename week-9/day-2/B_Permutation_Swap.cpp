#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, ans=0;
        cin >> n;

        int a[n+1];
        for (int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for (int i=1; i<=n; i++)
        {
            ans = __gcd(abs(i-a[i]), ans);
        }
        
        cout << ans <<endl;
        
    }
    


    return 0;
}
