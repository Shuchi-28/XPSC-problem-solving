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

        vector<int> v(n+1), pre(n+1);
        for (int i=1; i<=n; i++)
        {
            cin >> v[i];
        }

        pre[0] = 0;
        for (int i=1; i<=n; i++)
        {
            pre[i] = pre[i-1] ^ v[i];
        }

        int flag = 0;

        for (int i=1; i<n; i++)
        {
            int a = pre[i];
            int b = pre[n] ^ pre[i];
            if(a==b)
                flag = 1;
        }

        for (int i=1; i<n-1; i++)
        {
            int a = pre[i];
            for (int j=i+1; j<n; j++)
            {
                int b = pre[j] ^ pre[i];
                int c = pre[n] ^ pre[j];
                if(a==b && b==c)
                    flag = 1;
            }
            
        }
        
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
    


    return 0;
}
