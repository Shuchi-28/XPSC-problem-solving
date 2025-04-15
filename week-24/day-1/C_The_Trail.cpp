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

        string s;
        cin >> s;
    
        vector<vector<long long>> arr(n, vector<long long>(m));

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cin >> arr[i][j];
            }
        }
        
        vector<long long> row(n), col(m);
    
        for (int j=0; j<m; j++)
        {
            long long sum = 0;
            for (int i=0; i<n; i++)
            {
                sum += arr[i][j];
            }
            col[j] = sum;
        }
        
        for (int i=0; i<n; i++)
        {
            long long sum = 0;
            for (int j=0; j<m; j++)
            {
                sum += arr[i][j];
            }
            row[i] = sum;
        }

        long long x=0, y=0, cnt=0;
        while(cnt< n+m-1)
        {
            if(s[cnt]=='R')
            {
                arr[x][y] = -col[y];
                row[x] += arr[x][y];
                col[y] += arr[x][y];
                y++;
            }
            else{
                arr[x][y] = -row[x];
                row[x] += arr[x][y];
                col[y] += arr[x][y];
                x++;
            }
            cnt++;
        }

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cout << arr[i][j] <<" ";
            }
            cout <<'\n';
        }

    }
    

    return 0;
}
