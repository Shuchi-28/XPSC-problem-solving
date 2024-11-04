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
        int n, flag=0;
        cin >> n;

        string s, ss;
        cin >> s >> ss;
        
        for (int i=0; i<n; i++)
        {
            if ((s[i]=='G'&&ss[i]=='B') || (s[i]=='B'&&ss[i]=='G'))
            {
                continue;
            }
            else if (s[i]!=ss[i])
            {
                flag = 1;
            }
            
        }
        
        if (flag==0)
        {
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" <<'\n';
        }


    }
    

    return 0;
}