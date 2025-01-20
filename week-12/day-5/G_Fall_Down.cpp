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
        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr(n,vector<char>(m));
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cin >> arr[i][j];
            }
        }

        vector<vector<char>> ans(n,vector<char>(m,'.'));

        for (int j=0; j<m; j++)
        {
            int sum = 0;
            for (int i=0; i<n; i++)
            {
                if (arr[i][j]=='*')
                {
                    sum++;
                }
                else if (arr[i][j]=='o')
                {
                    ans[i][j] = 'o';
                    for (int k=1; k<=sum; k++)
                    {
                        ans[i-k][j] = '*';
                    }
                    sum = 0;
                }
                
            }
            if (sum)
            {
                for (int k=1; k<=sum; k++)
                {
                    ans[n-k][j] = '*';
                }
            }
            
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cout << ans[i][j];
            }
            cout <<'\n';
        }

        cout <<'\n';
    }
    

    return 0;
}
