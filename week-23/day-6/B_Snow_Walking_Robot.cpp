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
        string s, ans="";
        cin >> s;

        int L = count(s.begin(), s.end(), 'L');
        int R = count(s.begin(), s.end(), 'R');
        int U = count(s.begin(), s.end(), 'U');
        int D = count(s.begin(), s.end(), 'D');

        int minLR = min(L, R);
        int minUD = min(U, D);

        if(minLR==0 && minUD==0)
        {
            cout << 0 <<'\n';
            cout << " ";
        }
        else if(minLR==0)
        {
            cout << 2 <<'\n';
            cout << "UD\n";
        }
        else if (minUD==0)
        {
            cout << 2 <<'\n';
            cout << "LR\n";
        }
        else{
            for (int i=0; i<minUD; i++)
            {
                ans += "U";
            }
            for (int i=0; i<minLR; i++)
            {
                ans += "R";
            }
            for (int i=0; i<minUD; i++)
            {
                ans += "D";
            }
            for (int i=0; i<minLR; i++)
            {
                ans += "L";
            }
            
            cout << ans.size() <<'\n';
            cout << ans <<'\n';
        }
        
    }
    

    return 0;
}
