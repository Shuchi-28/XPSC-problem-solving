#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int x = min(2*a, b);
        if (n%2!=0)
        {
            n /=2;
            x = (n*x)+a;
        }
        else{
            n /= 2;
            x = (n*x);
        }
        
        cout << x <<'\n';

    }

    return 0;
}
