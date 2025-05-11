#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int n = a+b+c;
        if(n%2 != 0)
            cout << "-1\n";
        else
            cout << min(a+b, n/2) <<"\n";
            
    }



   return 0;
}
