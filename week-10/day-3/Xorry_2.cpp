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
        long long int x;
        cin >> x;

        long long int a = __lg(x);
        int cnt = 0;
        bool flag = false;
        for (int i=a-1; i>=0; i--)
        {
            if (x&(1<<i))
            {
                flag = true;
            }
            if (flag && !(x&(1<<i)))
            {
                cnt++;
            }
            
        }
        
        cout << (1LL << cnt) <<'\n';

    }
    
    return 0;
}
