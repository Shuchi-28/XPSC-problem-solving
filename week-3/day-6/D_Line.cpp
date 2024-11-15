#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ch[n];
        long long ans = 0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='L')
            {
                ans += i;
            }
            else{
                ans += n-i-1;
            }
            if (s[i]=='L')
            {
                ch[i] = n-i-1-i;
            }
            else{
                ch[i] = i-(n-i-1);
            }
        }
        sort(ch, ch+n, greater<int>());

        for (int i=0; i<n; i++)
        {
            if (ch[i] > 0)
            {
                ans += ch[i];
            }
            cout << ans <<" ";
        }
        cout <<'\n';

    }

    return 0;
}