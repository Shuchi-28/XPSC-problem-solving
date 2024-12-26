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
        int n, cnt=0;
        cin >> n;
        vector<long long> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int mx = INT_MIN;
        long long sum = 0;

        for (int i=0; i<n; i++)
        {
            sum += v[i];
            if (v[i]>mx)
                mx = v[i];
            if (2*mx == sum)
            {
                cnt++;
            }
        }
        
        cout << cnt <<'\n';

    }
    

    return 0;
}
