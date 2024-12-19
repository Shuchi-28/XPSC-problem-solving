#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        
        vector<long long> s(k);
        for (int i=0; i<k; i++)
        {
            cin >> s[i];
        }
        
        if (k==1)
        {
            cout << "YES" <<'\n';
        }
        else{
            vector<long long> v(n);
            long long j = n-1;
            for (int i=k-1; i>0; i--)
            {
                v[j] = s[i]-s[i-1];
                j--;
            }
            while (j>=0)
            {
                v[j] = v[j+1];
                s[0] -= v[j];
                j--;
            }
            
            v[0] += s[0];
            if (is_sorted(v.begin(), v.end()))
            {
                cout << "YES" <<'\n';
            }
            else{
                cout << "NO" <<'\n';
            }
            
        }
        
    }


    return 0;
}
