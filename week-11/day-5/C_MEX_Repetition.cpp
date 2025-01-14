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
        int n, k, b, missed, last;
        cin >> n >> k;
        vector<long long> v, tt;

        for (int i=0; i<n; i++)
        {
            cin >> b;
            v.push_back(b);
        }
        tt = v;
        sort(tt.begin(), tt.end());
        missed = n;

        for (int i=0; i<n; i++)
        {
            if (tt[i]!=i)
            {
                missed = i;
                break;
            }
        }
        
        long long bkp;
        for (int i=0; i<n; i++)
        {
            bkp = v[i];
            v[i] = missed;
            missed = bkp;
        }
        
        v.push_back(missed);

        last =  (k-1)%(n+1);
        for (int i=(n+1-last); i<(n+1); i++)
        {
            cout << v[i] <<" ";
        }
        for (int i=0; i<(n-last); i++)
        {
            cout << v[i] <<" ";
        }
        cout <<'\n';
        
    }
    


    return 0;
}
