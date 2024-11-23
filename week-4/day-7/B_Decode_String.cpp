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
        string s, ans = "";
        cin >> s;
        for (int i=n-1; i>=0; i--)
        {
            if (s[i]=='0')
            {
                ans += ((s[i-2]-'0')*10 + (s[i-1]-'0')-1) + 'a';
                i -=2;
            }
            else{
                ans += (s[i]-'0'-1)+'a';
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans <<'\n';
    }
    

    return 0;
}