#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0, cnt=0;
    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
            cnt = 0;
    }
    for (int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
            cnt = 0;
    }

    cout << ans;

    return 0;
}
