#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, sum=0;
        cin >> n;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int i=1; i<n; i++)
        {
            sum += v[i]-v[i-1];
        }
        
        cout << sum <<'\n';

    }

    return 0;
}
