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
        int a, b, n;
        cin >> a >> b >> n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        long long int ans = b;
        for (int i=0; i<n; i++)
        {
            ans += min(a-1, arr[i]);
        }
        cout << ans <<'\n';
    }
    


    return 0;
}