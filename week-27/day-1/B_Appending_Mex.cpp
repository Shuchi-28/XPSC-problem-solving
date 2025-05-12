#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    int flag = 0, mex = 0, ans;
    for (int i=0; i<n; i++)
    {
        if(v[i]>mex)
        {
            flag = 1;
            ans = i+1;
            break;
        }
        else if (mex==v[i])
        {
            mex++;
        }
    }

    if(flag)
        cout << ans;
    else
        cout << "-1";
    

    return 0;
}
