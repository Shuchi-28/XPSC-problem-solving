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
        int n, cnt=0, neg=0;
        cin >> n;
        int a[n];
        long long s = 0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        for (int i=0; i<n; i++)
        {
            s += abs(a[i]);
            if (a[i]<0)
            {
                if (neg==0)
                {
                    neg = 1;
                    cnt++;
                }
                
            }
            else if (a[i]>0)
            {
                neg = 0;
            }
            
            
        }
        cout << s <<" " << cnt <<'\n';
        
    }
    

    return 0;
}
