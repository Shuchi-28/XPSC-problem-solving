#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, flag = 0;
        cin >> n;

        vector<int> a(n);
        vector<int> b;

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        for (int i=0; i<n; i++)
        {
            if ((a[i]%a[0]!=0))
            {
                b.push_back(a[i]);
            }
        }
        for (int i=0; i<b.size(); i++)
        {
            if ((b[i]%b[0]!=0))
            {
                flag = 1;
            }
        }

        if (flag == 1)
            cout << "No\n";
        else
            cout << "Yes\n";

    }
    

    return 0;
}
