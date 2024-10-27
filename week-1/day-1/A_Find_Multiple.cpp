#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, f=0;
    cin >> a >> b >> c;

    for (int i=a; i<=b; i++)
    {
        if (i%c==0)
        {
            cout << i <<'\n';
            f=1;
            break;
        }
        
    }
    if (f==0)
    {
        cout << -1 <<'\n';
    }
    


    return 0;
}