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
        long long int n, k, q, ss = 0, anwer = 0;
        cin >> n >> k >> q;

        vector<long long> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        for (int i=0; i<n; i++)
        {
            if (a[i]<=q)
                ss++;
            else
            {
                if (ss >= k)
                {
                    long long int m = (ss - k+1);
                    anwer += (m*(m+1))/2;
                }
                ss = 0;
            }      
        }
        if (ss >= k)
        {
            long long int m = (ss - k+1);
            anwer += (m*(m+1))/2;
        }
        cout << anwer <<endl;

    }

    return 0;
}