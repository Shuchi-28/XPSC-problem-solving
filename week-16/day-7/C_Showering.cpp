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
        int n, s, m;
        cin >> n >> s >> m;

        vector<int> v;
        v.push_back(0);
        for (int i=0; i<n; i++)
        {
            int l, r;
            cin >> l >> r;
            v.push_back(l);
            v.push_back(r);
        }
        v.push_back(m);

        int flag = 0;
        for (int i=0; i<v.size(); i+=2)
        {
            if ((v[i+1]-v[i])>=s)
                flag = 1;
            
        }
        
        if(flag==1)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}
