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
        int n;
        cin >> n;

        if (n%2==1)
        {
            cout << "NO" <<'\n';
        }
        else{
            cout << "YES" <<'\n';
            for (int i=0; i<n/2; i++)
            {
                if (i%2==0)
                {
                    cout << "AA";
                }
                else{
                    cout << "BB";
                }
                
            }
            cout << '\n';
        }
        
    }
    

    return 0;
}