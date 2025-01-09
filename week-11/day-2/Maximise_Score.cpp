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
        int n, opt=INT_MAX;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        int diff[n-1];
        for (int i=0; i<n-1; i++)
        {
            diff[i] = abs(arr[i] - arr[i+1]);
        }
        
        if (n>=2)
        {
            opt = min(opt,diff[0]);
            opt = min(opt,diff[n-2]);
        }
        
        for (int i=1; i<n-1; i++)
        {
            int max_diff = max(diff[i-1], diff[i]);
            opt = min(opt, max_diff);   
        }

        
        cout << opt <<'\n';

    }


    return 0;
}
