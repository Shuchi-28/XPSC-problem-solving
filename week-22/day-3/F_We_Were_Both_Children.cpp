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

        vector<long long> v(n);
        vector<int> freq(n+1, 0);
        
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            if(v[i]>n)
                continue;
            freq[v[i]]++;
        }
        
        long long ans = 0;
        for (int i=1; i<=n; i++)
        {
            long long here = 0;
            for (int j=1; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    here += freq[j];
                    if(j*j!=i)
                        here += freq[i/j];
                }
            }

            ans = max(ans, here);
        }
        
        cout << ans <<'\n';
    }
    


    return 0;
}
