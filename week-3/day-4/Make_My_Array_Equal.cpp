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
        int n, a =0;
        cin >> n;
        int ar[n];
        map<int, int> m;
        for (int i=0; i<n; i++)
        {
            cin >> ar[i];
            if(ar[i]!= 0)
                m[ar[i]]++;
        }

        if (m.size()==1 || m.size() == 0)
        {
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" <<'\n';
        }
            
    }
    
    
    return 0;
}