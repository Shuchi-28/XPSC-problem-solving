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
        int nn, mm;
        cin >> nn >> mm;

        if (nn<mm)
        {
            cout << "No\n";
        }
        else{
            if ((mm-nn)%2 == 0)
            {
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
            
        }
        
    }
    
    return 0;
}
