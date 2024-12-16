#include<bits/stdc++.h>
using namespace std;

long long f(vector<long long> &even, vector<long long> &odd)
{
    long long int mx = odd.back();
    int n1 = even.size();
    if(mx < even[0])
    {
        return (n1+1);
    }
    long long ans = 0;
    for (int i=0; i<n1; i++)
    {
        if (even[i] > mx)
        {
            return (n1+1);
        }
        else{
            ans++;
            mx += even[i];
        }
    }
    return ans;
}

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
        vector<long long> odd, even;
        for (int i=0; i<n; i++)
        {
            long long int x;
            cin >> x;
            if (x%2)
            {
                odd.push_back(x);
            }
            else{
                even.push_back(x);
            }
        }
        if (odd.size()==0 || even.size()==0)
        {
            cout << 0 <<endl;
            continue;
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        long long ans = f(even, odd);
            
        cout << ans <<'\n';
        
    }
    

    return 0;
}
