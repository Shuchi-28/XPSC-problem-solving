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
       string s;
       cin >> s;

       int ss = 0, pp = 0, si = 0, pi = -1, idx=0;
       
       for (int i=0; i<n; i++)
       {
            if (s[i]=='s')
            {
                ss++;
                si = idx;
            }
            if (s[i]=='p')
            {
                pp++;
                if (pi == -1)
                {
                    pi = idx;
                }
            }
            idx++;
       }
    
        if((ss==0 || pp==0))
        {
            cout << "YES\n";
        }
        else if((si==0 || pi==n-1))
        {
            cout << "YES\n";
        }
        else{
            cout <<"NO\n";
        }
       
    }

    return 0;
}
