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
        string s;
        cin >> s;

        int once = 0;
        
        for (int i=0; i<s.size()-1; i++)
        {
            if (s[i]==s[i+1] && once == 0)
            {
                char c;
                if (s[i]=='a')
                {
                    c = 'b';
                }
                else{
                    c = 'a';
                }
                s.insert(i+1, 1, c);
                once++;
            }
        }
        if (once==0)
        {
            char c = s[s.size()-1];
            if (c=='a')
            {
                s+= 'b';
            }
            else{
                s+= 'a';
            }
        }

        cout << s <<'\n';
    }
    

    return 0;
}