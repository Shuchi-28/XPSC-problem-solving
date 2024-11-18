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
        int n, k, bl=0, wh=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i=0; i<k; i++)
        {
            if (s[i]=='W')
            {
                wh++;
            }
            else{
                bl++;
            }
        }
        int ans = wh;
        for (int i= 0; i<n-k; i++)
        {
            if (s[i]=='W')
            {
                wh--;
            }
            if (s[i+k]=='W')
            {
                wh++;
            }
            ans = min(ans, wh);
        }
        
        cout << ans <<'\n';
    }
    
    

    return 0;
}