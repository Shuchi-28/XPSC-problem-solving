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
        int n, k, cnt=0;
        cin >> n >> k;

        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
            if (abs(arr[i]-i-1)%k != 0)
            {
                cnt++;
            }
        }
        
        if (cnt==0)
        {
            cout << "0\n";
        }
        else if (cnt==2)
        {
            cout << "1\n";
        }
        else{
            cout << "-1\n";
        }

    }
    
    return 0;
}
