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

        vector<int> cnt(26, INT_MAX);
        set<char> st(s.begin(), s.end());
        
        for (char x: st)
        {
            int i=0, j=n-1, c=0;
            while (i<j)
            {
                if (s[i]==s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    if (s[i]==x)
                    {
                        i++;
                        c++;
                    }
                    else if (s[j]==x)
                    {
                        j--;
                        c++;
                    }
                    else{
                        c = -1;
                        break;
                    }
                }
                
            }
            if(c!=-1)
                cnt[x-'a'] = c;
        }
        
        sort(cnt.begin(), cnt.end());
        if (cnt[0]==INT_MAX)
        {
            cout << -1 <<'\n';
        }
        else{
            cout << cnt[0] <<'\n';
        }
        
    }
    

    return 0;
}
