#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,ans =0;
    cin >> n;

    map<int, int> mp;

    for (int i=1; i<=n; i++)
    {
        int num = i;
        set<int> st;
        for (int j=2; j*j<=i; j++)
        {
            while (num%j == 0)
            {
                st.insert(j);
                num /= j;
            }
        }
        if(num>1)
            st.insert(num);
        if(st.size()==2)
            ans++;
    }

    cout << ans;
    

    return 0;
}
