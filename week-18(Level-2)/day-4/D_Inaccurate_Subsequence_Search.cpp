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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        vector<int> b(m);

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<m; i++)
        {
            cin >> b[i];
        }
        
        map<int, int> m1, m2, m3;

        for (int i=0; i<m; i++)
        {
            m2[b[i]]++;
        }

        int cur = 0, ans = 0;

        for (int i=0; i<m; i++)
        {
            if(m2[a[i]]>0)
            {
                cur++;
                m2[a[i]]--;
                m1[a[i]]++;
            }
            else
                m3[a[i]]++;
        }
        if(cur>=k)
            ans++;

        for (int i=m; i<n; i++)
        {
            if(m2[a[i]]>0)
            {
                cur++;
                m2[a[i]]--;
                m1[a[i]]++;
            }
            else{
                m3[a[i]]++;
            }

            int x = a[i-m];
            if(m3[x]>0)
            {
                m3[x]--;
            }
            else{
                cur--;
                m2[x]++;
                m1[x]--;
            }
            if(cur>=k)
                ans++;
        }

        cout << ans <<'\n';
        
    }
    

    return 0;
}
