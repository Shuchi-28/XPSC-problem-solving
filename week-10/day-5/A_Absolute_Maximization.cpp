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
        
        int a, o;
        cin >> arr[0];
        a = arr[0], o = arr[0];
        for (int i=1; i<n; i++)
        {
            cin >> arr[i];
            a &= arr[i];
            o |= arr[i];
        }
        
        cout << o-a <<'\n';
    }
    

    return 0;
}
