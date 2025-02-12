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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        int flag=0;
        for (int i=0; i<n; i++)
        {
            if (is_sorted(a.begin(),a.end()))
            {
                flag = 1;
            }
            rotate(a.begin(),a.begin()+1, a.end());
        }

        if (flag==0)
        {
            cout << "No" <<'\n';
        }
        else{
            cout << "Yes\n";
        }

    }


    return 0;
}
