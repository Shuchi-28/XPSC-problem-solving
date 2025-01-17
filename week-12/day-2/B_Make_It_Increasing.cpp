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
        int n, ans=0;
        cin >> n;

        int v[n];
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        
        int flag=0;
        for (int i=n-2; i>=0; i--)
        {
            while (v[i]>=v[i+1] && v[i]>0)
            {
                v[i]/=2;
                ans++;
            }
            if (v[i]>=v[i+1])
            {
                flag = 1;
                break;
            }
                
        }   
        if (flag==1)
        {
            cout << "-1\n";
        }
        else{
            cout << ans <<'\n';
        }
       
    }
    

    return 0;
}
