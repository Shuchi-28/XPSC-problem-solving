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
        long long a, b;
        cin >> a >> b;


        while (__gcd(a, b)>1)
        {
            b /= __gcd(a,b);
        }
        
        if(b>1)
            cout << "No\n";
        else
            cout << "Yes\n";

    }
    

    return 0;
}
