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
        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        int flag = 0;
        for (int i=1; i<=n; i++)
        {
            if (i == arr[arr[i-1]-1])
                flag = 1;
        }
        
        if(flag)
            cout << "2\n";
        else
            cout << "3\n";

    }
    

    return 0;
}
