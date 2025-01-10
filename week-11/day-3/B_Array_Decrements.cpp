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
        int n, flag=0, zeros=0, diff=INT_MIN;
        cin >> n;
        int a[n], b[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin >> b[i];
            if(b[i]==0)
                zeros++;
        }

        for (int i=0; i<n; i++)
        {
            if (a[i]<b[i])
            {
                flag = 1;
                break;
            }
            diff = max(a[i]-b[i], diff);
        }
        for (int i=0; i<n; i++)
        {
            if ((a[i]-diff) != b[i] && (b[i]!=0))
            {
                flag = 1;
                break;
            }
        }
        
        if (flag==0)
        {
            cout << "YES\n";
        }
        else{
            cout << "NO" <<'\n';
        }
        
        
    }
    

    return 0;
}
