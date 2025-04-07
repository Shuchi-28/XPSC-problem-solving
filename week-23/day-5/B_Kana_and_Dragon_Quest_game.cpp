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
        int x, n, m;
        cin >> x >> n >> m;

        int h = x;
        for (int i=0; i<n; i++)
        {
            x = (x/2)+10;
        }
        
        x -= 10*m;
        h -= 10*m;

        if(x<=0 || h<=0)
            cout << "YES\n";
        else
            cout << "NO\n";


    }
    

    return 0;
}
