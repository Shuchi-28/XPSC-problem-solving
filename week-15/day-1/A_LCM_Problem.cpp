#include<bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int l, r;
        cin >> l >> r;

        if(2LL*l <= r )
        {
            cout << l << " " << 2LL*l <<'\n';
        }
        else{
            cout << -1 << " " << -1 <<'\n';
        }
        
    }
    
    
    return 0;
}
