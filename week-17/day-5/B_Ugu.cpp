#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, segment=0;
        cin >> n;

        string s;
        cin >> s;

        if (is_sorted(s.begin(), s.end()))
        {
            cout << "0\n";
            continue;
        }

        for (int i=0; i<n; i++)
        {
            if (s[i]=='1' &&(i==0 || s[i-1]=='0') )
            {
                segment++;
            }
        }
        
        if (segment==1 && s[n-1]=='0')
        {
            cout <<"1\n";
        }
        else if (segment>1 && s[n-1]=='1')
        {
            segment--;
            cout << (segment*2) <<'\n';
        }
        else if (segment>1 && s[n-1]=='0')
        {
            cout << (segment*2)-1 <<'\n';
        }
        

    }
    


    return 0;
}
