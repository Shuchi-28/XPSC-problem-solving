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
        int n, once=0, zeros=0, Lzero=0;
        cin >> n;
        int arr[n];
        long long sum = 0;
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum +=  arr[i];
            if (arr[i]==0)
            {
                zeros++;
            }
        }
        sum -= arr[n-1];
        for (int i=0; i<n; i++)
        {
            if (arr[i]!=0)
            {
                once=1;
            }
            if (once==0 && arr[i]==0)
            {
                Lzero++;
            }
        }
        
        long long ans = (zeros-Lzero)+sum;
        if(arr[n-1]==0 && ans!=0)
            ans--;

        cout << ans <<'\n';
    }
    

    return 0;
}
