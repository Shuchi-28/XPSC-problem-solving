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
        char c;
        int x;
        cin >> c >> x;
        
        for (int i=1; i<=8; i++)
        {
            if(i!=x)
                cout << c << i <<'\n';
        }
        for (char i='a'; i<='h'; i++)
        {
            if(i!=c)
                cout << i << x << '\n';
        }
        
    }
    


    return 0;
}