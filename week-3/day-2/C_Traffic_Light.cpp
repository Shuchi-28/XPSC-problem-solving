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
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        s = s+s;
        long long int gr = s.size(), a=0;

        for (int i=s.size()-1; i>=0; i--)
        {
            if (s[i]=='g')
            {
                gr = i;
            }
            if (s[i]==c)
            {
                a = max(a, (gr-i));
            }
            
        }
        
        cout << a <<'\n';
        
    }


    return 0;
}