#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        int l=0, r=0, k=0, ans=INT_MIN, a=0;
        while (r<n)
        {
            k += arr[r];
            a += arr[r];
            if(k<=s)
            {
                ans = max(ans, r-l+1);
            }
            else{
                while (k>s && l<=r)
                {
                    k -= arr[l];
                    l++;
                }
                if(k<=s)
                {
                    ans = max(ans, r-l+1);
                }
            }
            r++;
        }

        if(a<s)
            cout << -1 << '\n';
        else
            cout << n-ans << '\n';
        
    }
    


    return 0;
}
