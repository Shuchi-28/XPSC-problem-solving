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
        int n, flag=0;
        cin >> n;

        vector<long long> b(n-1), a(n);
        for (int i=0; i<n-1; i++)
        {
            cin >> b[i];
        }
        a[0] = b[0];
        a[n-1] = b[n-2];
        for (int i=1; i<n-1; i++)
        {
            a[i] = b[i]|b[i-1];
        }
        for (int i=0; i<n-1; i++)
        {
            if (b[i] != (a[i]&a[i+1]))
            {
                flag = 1;
            }
            
        }
        if (flag == 1)
        {
            cout << -1;
        }
        else{
            for(int i=0; i<n; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout <<'\n';
    }
    

    return 0;
}
