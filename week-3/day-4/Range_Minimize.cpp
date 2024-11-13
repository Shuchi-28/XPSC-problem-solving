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
        int ar[n];
        for (int i=0; i<n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar+n);
        
        long long int a = ar[n-1] - ar[2];
        long long int b = ar[n-3] - ar[0];
        long long int c = ar[n-2] - ar[1];

        a = min(a,b);
        cout << min(a,c) <<'\n';
    }
    
    
    return 0;
}