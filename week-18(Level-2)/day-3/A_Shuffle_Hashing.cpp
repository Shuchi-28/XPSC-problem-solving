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
        string s, p;
        cin >> s >> p;

        map<char, int> mp1, mp2;
        for (int i=0; i<s.size(); i++)
        {
            mp1[s[i]]++;
        }
        int flag = 0, l=0, r=0, cnt=0;
        
        while (r<p.size())
        {
            mp2[p[r]]++;
            if (r-l+1 == s.size())
            {
                for(auto c: s)
                {
                    if(mp1[c]==mp2[c])
                        cnt++;
                }
                if(cnt==s.size())
                    flag = 1;
                mp2[p[l]]--;
                if(mp2[p[l]]==0)
                    mp2.erase(p[l]);
                l++;
                cnt = 0;
            }
            r++;
        }
        

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
