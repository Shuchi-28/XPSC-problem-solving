#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int mx1 = max(a, b);
        int mx2 = max(c, d);
        int mn1 = min(a, b);
        int mn2 = min(c, d);

        if (mx1==mx2)
        {
            if ((mn1+mn2)==mx1)
            {
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
            
        }
        else{
            cout << "No\n";
        }
        
        
    }
    

    return 0;
}
