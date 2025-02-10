#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    while (q--)
    {
        int x;
        cin >> x;
        int l=0, r=n-1, ans = -1;

        while (l<=r)
        {
            int mid =(r+l)/2;
            if (x>=arr[mid])
            {
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        
        cout << (ans+1) <<'\n';
    
    }

    return 0;
}
