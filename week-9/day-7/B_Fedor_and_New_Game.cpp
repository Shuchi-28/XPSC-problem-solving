#include<bits/stdc++.h>
using namespace std;
int arr[10000];

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    for (int i=0; i<=m; i++)
    {
        cin >> arr[i];
    }
    
    int ans = 0;
    for (int i=0; i<m; i++)
    {
        int sum = 0;
        for (int j=0; j<n; j++)
        {
            sum += (arr[m]>>j&1) != (arr[i]>>j&1);
        }
        ans += sum <= k;
    }

    cout << ans <<'\n';


    return 0;
}
