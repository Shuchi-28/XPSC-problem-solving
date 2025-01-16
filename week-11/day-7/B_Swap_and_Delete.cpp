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
        string s;
        cin >> s;

        int n = s.length();
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');

        int i;
        for (i=0; i<n; i++)
        {
            if (s[i]=='0')
            {
                if (one>0)
                    one--;
                else{
                    break;
                }
            }
            else if (s[i]=='1')
            {
                if (zero>0)
                    zero--;
                else{
                    break;
                }
            }
            
        }

        cout << n-i <<'\n';
        
    }   
    

    return 0;
}
