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
        int x;
        cin >> x;

        int a = __lg(x);
        a = (1LL << a);

        cout <<  (x-a) << " " << a <<'\n';

    }
    
    return 0;
}
