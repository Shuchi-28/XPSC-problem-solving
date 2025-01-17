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

        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        
        long long one = count(v.begin(), v.end(), 1);
        long long zero = count(v.begin(), v.end(), 0);

        if (one == 0)
        {
            cout << "0\n";
        }
        else{
            cout << one*(1LL<<zero) <<'\n';
        }

        
    }


    return 0;
}
