
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt=0;
        cin >> n;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int x = (n-1)/2;
        int val = v[x];
        for (int i=x; i<n; i++)
        {
            if (val==v[i])
            {
                cnt++;
            }
            
        }
        
        cout << cnt <<'\n';
    }
    

    return 0;
}
