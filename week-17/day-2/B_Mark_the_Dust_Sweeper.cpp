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
        int n, once=0, zeros=0, Lzero=0;
        cin >> n;
        vector<int> v(n);
        long long sum = 0;
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            sum +=  v[i];
            if (v[i]==0)
            {
                zeros++;
            }
        }
        sum -= v[n-1];
        for (int i=0; i<n; i++)
        {
            if (v[i]!=0)
            {
                once=1;
            }
            if (once==0 && v[i]==0)
            {
                Lzero++;
            }
        }
        
        long long ans = (zeros-Lzero)+sum;
        if(v[n-1]==0 && ans!=0)
            ans--;

        cout << ans <<'\n';
    }
    

    return 0;
}
