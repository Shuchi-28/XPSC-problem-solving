#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    int ps1=0, ps2=0, uns2=0;
    for (int i=0; i<s1.size(); i++)
    {
        if (s1[i]=='+')
        {
            ps1++;
        }
        if (s2[i]=='+')
        {
            ps2++;
        }
        if (s2[i]=='?')
        {
            uns2++;
        }
        
    }
    
    int cnt = 0;
    for (int i=0; i<(1LL<<uns2); i++)
    {
        if (__builtin_popcount(i)+ps2 == ps1)
        {
            cnt++;
        }
        
    }
    
    cout << fixed<<setprecision(12) << (double)cnt/(1LL<<uns2) <<'\n';

    return 0;
}
