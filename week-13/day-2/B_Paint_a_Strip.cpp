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

       if (n==1)
       {
            cout << "1\n";
       }
       else if (n==2)
       {
            cout << "2\n";
       }
       else if (n==3)
       {
            cout << "2\n";
       }
       else if (n==4)
       {
            cout << "2\n";
       }
       else{
            long long int ans = 2, sum = 4;
            while (sum<n)
            {
                ans++;
                sum++;
                sum *= 2;
            }
            
            cout << ans <<'\n';
       }
       
       
    }
    

    return 0;
}
