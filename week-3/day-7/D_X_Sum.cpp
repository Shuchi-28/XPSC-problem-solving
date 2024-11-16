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
        
        int arr[n][m];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cin >> arr[i][j];
            }
            
        }
        int sum = 0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                int cur = arr[i][j];
                int p = i+1;
                int q = j+1;
                while (p<n && q<m)
                {
                    cur += arr[p++][q++];
                }
                p = i-1;
                q = j-1;
                while (p>=0 && q>=0)
                {
                    cur += arr[p--][q--];
                }
                p = i-1;
                q = j+1;
                while (p>=0 && q<m)
                {
                    cur += arr[p--][q++];
                }
                p = i+1;
                q = j-1;
                while (p<n && q>=0)
                {
                    cur += arr[p++][q--];
                }

                sum = max(sum, cur);
            }
            
        }
        
        cout << sum <<'\n';
        
    }
    

    return 0;
}
