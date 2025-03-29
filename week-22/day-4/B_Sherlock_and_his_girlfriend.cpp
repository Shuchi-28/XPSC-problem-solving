#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n<3)
    {
        cout << 1 <<'\n';
        for (int i=0; i<n; i++)
        {
            cout << 1 <<" ";
        }
        return 0;
    }
    vector<bool> ans(n+2, true);
    
    for (int i=2; i*i<=n+2; i++)
    {
        if(ans[i])
        {
            for (int j=i+i; j<=n+1; j+=i)
            {
                ans[j] = false;
            }
            
        }
        
    }
    
    cout << 2 <<'\n';
    for (int i=2; i<=n+1; i++)
    {
        if(ans[i])
            cout << 1 <<" ";
        else
            cout << 2 << " ";
    }
    
    

    return 0;
}
