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
        long long x, y;
        cin >> x >> y;

        long long total = x + y;
        if(total%2==0)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    
    return 0;
}