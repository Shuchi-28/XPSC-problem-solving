#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, mexA, mexB;
        cin >> n;

        vector<int> cnt(105,0);
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        for (int i=0; i<105; i++)
        {
            if(cnt[i]==0)
            {
                mexA = i;
                break;
            }
            else
            {
                cnt[i]--;
            }
            
        }
        for (int i=0; i<105; i++)
        {
            if(cnt[i]==0)
            {
                mexB = i;
                break;
            }
            else
            {
                cnt[i]--;
            }
            
        }
        
        cout << mexA+mexB <<'\n';
    
    }
    
    return 0;
}
