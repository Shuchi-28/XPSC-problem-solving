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
        int n, k, cnt=0, l=0, r=0;
        cin >> n >> k;
        string s;
        cin >> s;
        while (r<n)
        {
            if (s[r]=='B')
            {
                cnt++;
                r +=k;
            }
            else{
                r++;
            }
        }
        
        
        cout << cnt <<'\n';

    }
    
    

    return 0;
}