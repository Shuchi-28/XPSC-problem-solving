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
        map<int, int> m;
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        int a = 0;
        for (int i=n-1; i>=0; i--)
        {
            m[arr[i]]++;

            if (m[arr[i]]>1)
            {
                break;
            }
            a++;
        }
        
        
        cout << n-a <<'\n';

    }
    
    
    
    return 0;
}