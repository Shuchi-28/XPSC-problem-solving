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
        int n, cnt=0;
        cin >> n;
        vector<int> a;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if (x<0)
            {
                a.push_back(i);
            }
        }

        for (int i=0; i<a.size()-1; i++)
        {
            if (a[i]+1!=a[i+1])
            {
                cnt++;
            }
            
        }
        cout << cnt <<'\n'
        
    }
    

    return 0;
}