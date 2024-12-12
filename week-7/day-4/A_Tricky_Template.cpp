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
        string a, b, c;
        cin >> n >> a >> b >> c;

        bool flag = false;
        for (int i=0; i<n; i++)
        {
            if (c[i]!=b[i] && c[i]!=a[i])
            {
                flag = true;
                break;
            }
            
        }
        if(flag==true)
            cout << "YES" <<'\n';
        else
            cout << "NO" <<'\n';
 
    }
    


    return 0;
}
