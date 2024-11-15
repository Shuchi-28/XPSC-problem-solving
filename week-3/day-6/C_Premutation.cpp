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
        int n;
        cin >> n;
        vector<int> v[n+1];
        vector<int> ans(n+1);
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<n; j++)
            {
                int x;
                cin >> x;
                v[x].push_back(j);
            }
            
        }
        for (int i=1; i<=n; i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        
        for (int i=1; i<=n; i++)
        {
            if (v[i][n-2]==n-1)
            {
                if (v[i][0]==n-1)
                {
                    ans[n] = i;
                }
                else{
                    ans[n-1] = i;
                }
                
            }
            else{
                int a = v[i][n-2];
                ans[a] = i;
            }

        }
        for (int i=1; i<=n; i++)
        {
            cout << ans[i] <<" ";
        }
        cout << '\n';
    }
    

    return 0;
}