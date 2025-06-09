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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cntB = count(s.begin(), s.end(), 'B');
        if(cntB == k)
        {
            cout << "0\n";
        }
        else if (k>cntB)
        {
            int x = 0, ans;
            k -= cntB;
            for (int i=0; i<n; i++)
            {
                if(s[i]=='A')
                    x++;
                if(x==k)
                {
                    ans = i+1;
                    break;
                }
            }
            cout <<"1\n";
            cout << ans << " B\n";
        }
        else{
            int x = 0, ans, b = cntB-k;
            for (int i=0; i<n; i++)
            {
                if(s[i]=='B')
                    x++;
                if(x==b)
                {
                    ans = i+1;
                    break;
                }
            }
            cout <<"1\n";
            cout << ans << " A\n";

        }
        
        
    }
    
    return 0;
}