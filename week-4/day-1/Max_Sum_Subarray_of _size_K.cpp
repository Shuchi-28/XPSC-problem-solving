#include<bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1


int main()
{
    int n, k;
    cin >> n >> k; // k = the size of window
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int l=0, r=0, ans = 0, sum=0;

    while (r<n)
    {
        sum += arr[r];
        if (r-l+1 == k)
        {
            ans = max(ans, sum);
            sum -= arr[l];
            l++;
            r++;
        }
        else{
            r++;
        }
    }

    cout << ans <<'\n'; // ans = max sum of window.
    
    return 0;
}