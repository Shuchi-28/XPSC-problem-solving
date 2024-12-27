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
        int n, k;
        cin >> n >> k;
        
        map<long long, long long> mp;
        long long l=-1, count = 0, maxo = 0, final_l = -1;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto x: mp)
        {
            if (x.second>=k)
            {
                if (count==0)
                {
                    l = x.first;
                    count++;
                }
                else{
                    if (l+count==x.first)
                        count++;
                    else{
                        if (count>maxo)
                        {
                            maxo = count;
                            final_l = l;
                        }
                        count = 1;
                        l = x.first;
                    }
                }
                
            }
            else{
                if (count>maxo)
                {
                    maxo = count;
                    final_l = l;
                }
            }
            
            
        }
        if (count>maxo)
        {
            maxo = count;
            final_l = l;
        }
        if (final_l==-1)
        {
            cout << -1 <<endl;
        }
        else{
            cout << final_l << " " << final_l+maxo-1 <<endl;
        }

    }
    

    return 0;
}
