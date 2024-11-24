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
        int n, c, flag=0;
        cin >> n >> c;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] + i + 1;
        }

        sort(arr, arr+n);
        long long sum = 0;
        for (int i=0; i<n; i++)
        {
            sum += arr[i];
            if (sum>c)
            {
                cout << i <<'\n';
                flag = 1;
                break;
            }
            
        }
        if(flag==0)
            cout << n <<'\n';
        
    }
    


    return 0;
}