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
        int n, k;
        cin >> n >> k;

        vector<int> v(k);
        for (int i=0; i<k; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int ans = 0, sum = 0;

        for (int i=k-1; i>=0; i--)
        {
            sum += n - v[i];
            if(sum<n)
                ans++;
            else
                break;
        }
        
        cout << ans <<'\n';

    }
    

    return 0;
}
