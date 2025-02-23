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

        long long sum1=0, sum2=0;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            sum1 += x;
            if(x==1)
                sum2 += 2;
            else
                sum2 += 1;
        }
        
        if (n==1)
        {
            cout << "NO\n";
            continue;
        }
        
        if(sum1>=sum2)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    

    return 0;
}