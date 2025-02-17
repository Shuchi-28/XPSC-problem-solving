#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, flag=0;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i=0; i<n; i++)
        {
            if (abs(a[i]-b[i])>1 || (a[i]>b[i]))
                flag = 1;
        }

        if(flag)
            cout << "NO\n";
        else
            cout << "YES\n";

    }
    

    return 0;
}
