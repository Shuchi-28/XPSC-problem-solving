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
        int n;
        cin >> n;

        int x = __lg(n);
        cout << (1LL<<x)-1 <<'\n';
    }
    

    return 0;
}
