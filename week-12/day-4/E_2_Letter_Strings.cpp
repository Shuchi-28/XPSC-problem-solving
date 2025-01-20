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
        
        map<string,long long> mp;
        long long ans = 0;
        for (int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            string tmp = s;
            for (char ch='a'; ch<='z'; ch++)
            {
                if (ch!=s[0])
                {
                    tmp[0] = ch;
                    ans += mp[tmp];
                }
            }
            tmp = s;
            for (char ch='a'; ch<='z'; ch++)
            {
                if (ch!=s[1])
                {
                    tmp[1] = ch;
                    ans += mp[tmp];
                }
            }

            mp[s]++;
        }
        
        cout << ans <<'\n';
    }
    


    return 0;
}
