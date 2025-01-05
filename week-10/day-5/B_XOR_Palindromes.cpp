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
        int n, mismatch=0, flag=0;
        cin >> n;

        string s, res = "";
        cin >> s;

        for (int i=0; i<n/2; i++)
        {
            mismatch += (s[i]!=s[n-i-1]);
        }
        for (int i=0; i<mismatch; i++)
        {
            res +="0";
        }
        if (n%2 != 0)
        {
            for (int i=mismatch; i<=(n-mismatch); i++)
            {
                res +="1";
            }
        }
        else{
            for (int i=mismatch; i<=(n-mismatch); i++)
            {
                res += (flag%2 == 0)? "1":"0";
                flag++;
            }
        }
        for (int i=0; i<mismatch; i++)
        {
            res +="0";
        }
        
        cout << res <<endl;
        
    }
    

    return 0;
}
