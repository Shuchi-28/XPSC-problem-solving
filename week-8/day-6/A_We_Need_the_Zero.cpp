#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, XOR=0;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
            XOR ^= arr[i];
        }
        if (n%2 == 0)
        {
            if (XOR == 0)
            {
                cout << 0 <<'\n';
            }
            else{
                cout << -1 <<'\n';
            }
        }
        else{
            cout << XOR <<'\n';
        }
    }
    

    return 0;
}
