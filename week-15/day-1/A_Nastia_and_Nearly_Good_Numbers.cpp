#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        
        if(b==1)
        {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            long long x = a;
            long long y = a*b-a;
            long long z = a*b;
            if (x==y)
            {
                cout << x <<" " << 2*z-x << " " << 2*z*1LL <<'\n';
            }
            else{
                cout << x << " " << y << " " << z <<'\n';
            }
            
        }
    }
    
    
    return 0;
}
