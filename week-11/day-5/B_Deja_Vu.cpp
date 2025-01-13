#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n], b[q];

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        long long int l = 1e18, x;

        for (int i=0; i<q; i++)
        {
            cin >> x;
            if (l>x)
            {
                l = x;
                for (int j=0; j<n; j++)
                {
                    if (a[j]%(1<<x)==0)
                    {
                        a[j] += (1<<(x-1));
                    }
                }
            }
            
        }
        
        for (int i=0; i<n; i++)
        {
            cout << a[i] <<" ";
        }

        cout <<endl;
    }

    return 0;
}
