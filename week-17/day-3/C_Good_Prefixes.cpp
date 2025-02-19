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
        vector<long long> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int mx = INT_MIN;
        long long sum = 0;

        for (int i=0; i<n; i++)
        {
            sum += a[i];
            if (a[i]>mx)
                mx = a[i];
            if (2*mx == sum)
            {
                cnt++;
            }
        }
        
        cout << cnt <<'\n';

    }
    

    return 0;
}
