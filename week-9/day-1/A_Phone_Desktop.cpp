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
        int x, y, ans=0;
        cin >> x >> y;

        while (x>0 || y>0)
        {
            if (y>=2)
            {
                y -= 2;
                x -= 7;
                ans++;
            }
            else if (y==1)
            {
                y -= 1;
                x -= 11;
                ans++;
            }
            else{
                x -= 15;
                ans++;
            }
        }
        
        cout << ans <<'\n';
        
    }
    

    return 0;
}
