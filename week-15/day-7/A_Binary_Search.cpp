#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin >> n >> q;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);

    while (q--)
    {
        int x;
        cin >> x;
        int l=0, r=n-1;
        bool flag = false;

        while (l<=r)
        {
            int mid =(r+l)/2;
            if (arr[mid] == x)
            {
                flag = true;
                break;
            }
            if (x>arr[mid])
            {
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        if (flag==true) cout << "YES\n";
        else cout << "NO\n";
    
    }

    return 0;
}
