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

        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            x = x%10;
            mp[x]++;
        }

        int flag = 0;
        for (int i=0; i<10; i++)
        {
            for (int j=0; j<10; j++)
            {
                for (int k=0; k<10; k++)
                {
                    int sum = i+j+k;
                    sum %= 10;
                    if(sum==3)
                    {
                        mp[i]--;
                        mp[j]--;
                        mp[k]--;
                        if(mp[i]>=0 && mp[j]>=0 && mp[k]>=0)
                            flag = 1;
                        else
                        {
                            mp[i]++;
                            mp[j]++;
                            mp[k]++;
                        }
                    }
                    if(flag)
                        break;
                }
                
            }
            
        }
        
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    
    return 0;
}
