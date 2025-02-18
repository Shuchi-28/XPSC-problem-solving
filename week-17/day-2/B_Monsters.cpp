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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v(n);
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v[i] = {-1*(x%k==0? k:x%k), i+1};
        }
        
        sort(v.begin(), v.end());
        for (auto a: v)
        {
            cout << a.second << " ";
        }
        cout << '\n';
        
    }
    

    return 0;
}
