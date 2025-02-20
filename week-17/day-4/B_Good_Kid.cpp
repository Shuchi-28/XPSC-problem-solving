#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, ans = 1, flag=0;
        cin >> n;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        v[0] = v[0]+1;
        for (int i=0; i<n; i++)
        {
            ans *= v[i];
        }
        
        cout << ans <<'\n';
        
    }
    


    return 0;
}
