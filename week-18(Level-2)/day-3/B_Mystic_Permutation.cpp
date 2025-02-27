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

        vector<int> v(n);
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        a = v;
        if (n==1)
        {
            cout << "-1\n";
            continue;
        }
        
        sort(a.begin(), a.end());
        for (int i=0; i<n; i++)
        {
            if(a[i]==v[i])
            {
                if(i==n-1)
                    swap(a[i], a[i-1]);
                else
                    swap(a[i], a[i+1]);
            }
        }
        for (int i=0; i<n; i++)
        {
            cout << a[i] <<" ";
        }

        cout <<"\n";
        
    }
    


    return 0;
}
