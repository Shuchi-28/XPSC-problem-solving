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
        int n, m, f=0;

        cin >> n >> m;
        int arr[n];

        if (m<n)
        {
            cout << "NO\n";
            continue;
        }
        if (n%2 == 1)
        {
            for (int i=0; i<n-1; i++)
            {
                arr[i] = 1;
            }
            arr[n-1] = m-(n-1);
        }
        else{
            for (int i=0; i<n-2; i++)
            {
                arr[i] = 1;
            }
            m = m-(n-2);

            if (m>0 && (m%2)==0)
            {
                arr[n-2] = m/2;
                arr[n-1] = m/2;
            }
            else{
                f=1;
            }
        }
        
        if (f==1)
        {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for (int i=0; i<n; i++)
            {
                cout << arr[i] <<" ";
            }
            cout <<"\n";
        }
        
    }
    

    return 0;
}