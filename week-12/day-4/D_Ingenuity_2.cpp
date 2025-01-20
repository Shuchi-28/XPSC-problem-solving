#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int x = 0, y = 0;
        for (auto i: s)
        {
            if(i=='N') y++;
            else if(i == 'S') y--;
            else if(i == 'W') x--;
            else x++;
        }
        if (abs(x)%2 ==1 || abs(y)%2 ==1)
            cout << "NO\n";
        else if (n==2 && x==0 && y==0)
            cout << "NO\n";
        else{
            int n=0, ss=0, w=1, e=1;
            char m[2] = {'R', 'H'};
            string ans = "";
            for (auto c: s)
            {
                if(c=='N') 
                {
                    ans += m[n];
                    n = 1-n;
                }
                else if (c == 'S')
                {
                    ans += m[ss];
                    ss = 1-ss;
                }
                else if (c == 'W')
                {
                    ans += m[w];
                    w = 1-w;
                }
                else{
                    ans += m[e];
                    e = 1-e;
                }
                
            }
            cout << ans <<'\n';
        }
        
    }


    return 0;
}
