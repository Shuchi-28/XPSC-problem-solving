#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    vector<long long> ans;
    for (long long i=1; i*i<=n; i++)
    {
        if (n%i==0)
        {
            ans.push_back(i);
            if ((n/i) != i)
            {
                ans.push_back(n/i);
            }
        
        }
    }

    sort(ans.begin(), ans.end());

    if (ans.size()<k)
    {
        cout << "-1\n";
    }
    else{
        cout << ans[k-1] <<"\n";
    }
    
    

    return 0;
}
