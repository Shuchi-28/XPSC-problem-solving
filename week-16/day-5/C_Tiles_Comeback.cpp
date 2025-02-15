#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        
        int cnt = 0, flag = 0;
        if (v[0]==v[n-1])
        {
            for (int i=0; i<n; i++)
            {
                if (v[i]==v[0])
                    cnt++;
                if(cnt==k)
                    flag = 1;
            }
            if(flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else{
            int l = -1, u = -1;

            for (int i=0; i<n; i++)
            {
                if (v[i]==v[0])
                    cnt++;
                if(cnt==k)
                {
                    l = i;
                    break;
                }
            }
            
            cnt = 0;
            for (int i=n-1; i>=0; i--)
            {
                if (v[i]==v[n-1])
                    cnt++;
                if(cnt==k)
                {
                    u = i;
                    break;
                }
            }

            if (l!=-1 && u != -1 && l<u)
            {
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
            
        }

    }

    return 0;
}
