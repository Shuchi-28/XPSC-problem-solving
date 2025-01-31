#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);

        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        long long G1 = 0, G2 = 0;

        for (int i=0; i<n; i+=2)
        {
            G1 = __gcd(G1, v[i]);
        }
        for (int i=1; i<n; i+=2)
        {
            G2 = __gcd(G2, v[i]);
        }
        
        long long int ans=0, flag = 1;
        for (int i=1; i<n; i+=2)
        {
            if(v[i]%G1==0)
                flag = 0;
        }
        
        if (flag)
        {
            ans = G1;
        }
        else{
            flag = 1;
            for (int i=0; i<n; i+=2)
            {
                if(v[i]%G2==0)
                    flag = 0;
            }
            if (flag)
            {
                ans = G2;
            }
        }
        
        cout << ans <<'\n';
    }
    

    return 0;
}
