#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        string s;
        cin >> s;

        int a = count(s.begin(), s.end(),'#');
        if (n==a)
        {
            cout << "0\n";
            continue;
        }

        for (int i=0; i<n-2; i++)
        {
            if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
            {
                flag = 1;
            }
        }
        
        if (flag)
        {
            cout << 2 <<"\n";
        }
        else{
            cout << count(s.begin(), s.end(),'.') <<"\n";
        }
    }
    

    return 0;
}
