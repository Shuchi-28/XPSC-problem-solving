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
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        string s;
        cin >> s;

        vector<long long int> arr(n);

        arr[0] = v[0];

        for (int i = 1; i < n; i++)
        {
            arr[i] = v[i] + arr[i - 1];
        }
        
        int l=0, r=n-1;
        long long ans=0;
        while (l<r)
        {
            while (l<n && s[l]!='L')
                l++;
            while (r>=0 && s[r]!='R')
                r--;
            if(l<r && r>=0)
            {
                if(l==0)
                    ans += arr[r];
                else
                    ans += (arr[r]-arr[l-1]);
                l++;
                r--;
            }
            else
                break;
        }
        
        cout << ans << '\n';
    }
    

    return 0;
}
