#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n%2 == 0)
        {
            cout << "YES\n";
            for (int i=0; i<n/2; i++)
            {
                cout << 1 << " " << -1 << " ";
            }
            cout << '\n';
        }
        else{
            if(n == 3)
                cout << "NO\n";
            else{
                cout << "YES\n";
                for (int i=1; i<=n; i++)
                {
                    if(i%2!=0)
                        cout << (n/2)-1 <<" ";
                    else
                        cout << -n/2 << " ";
                }
                cout << '\n';
            }
        }
        
        
    }
    

    return 0;
}
