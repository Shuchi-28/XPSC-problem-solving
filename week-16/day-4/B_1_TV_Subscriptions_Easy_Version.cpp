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
        int n, k, d;
        cin >> n >> k >> d;
        
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int l= 0, r= 0, ans=INT_MAX;
        map<int, int> mp;

        while (r<n)
        {
            mp[arr[r]]++;
            if (r-l+1 == d)
            {
                int a = mp.size();
                ans = min(ans, a);
                mp[arr[l]]--;
                if(mp[arr[l]]==0)
                    mp.erase(arr[l]);
                l++;
                r++;

            }
            else{
                r++;
            }
            
        }
        
        cout << ans <<'\n';
    }
    

    return 0;
}
