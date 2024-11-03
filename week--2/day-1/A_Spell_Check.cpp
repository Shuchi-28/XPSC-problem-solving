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
        cin >> n;
        string s;
        cin >> s;
        int T=0, I=0, m=0, u=0, r=0, k=0;

        for (int i=0; i<n; i++)
        {
            if (s[i]=='T')
                T++;
            else if (s[i]=='i')
                I++;
            else if (s[i]=='m')
                m++;
            else if (s[i]=='u')
                u++;
            else if (s[i]=='r')
                r++;
            else
                k++;
        }

        if (T==1 && I==1 && m==1 && u==1 && r==1 && k==0)
        {
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" <<'\n';
        }
        
    }
    

    return 0;
}