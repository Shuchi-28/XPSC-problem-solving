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
        string s;
        cin >> s;

        long long c = 0, mx, mini = INT_MAX;
        for(char i='a'; i<='z'; i++)
        {
            c = 0, mx = 0;
            for (int j=0; j<s.size(); j++)
            {
                if(s[j]!=i)
                {
                    c++;
                    mx = max(mx, c);
                }
                else
                    c = 0;
            }

            mini = min(mini, mx);
        }
        
        if(mini == 0)
            cout << "0\n";
        else{
            int ans = 0;
            //cout << mini << " ";
            while (mini>1)
            {
                mini /=2;
                ans++;
            }
            
            cout << ans+1 <<'\n';
        }
        
    }

    return 0;
}