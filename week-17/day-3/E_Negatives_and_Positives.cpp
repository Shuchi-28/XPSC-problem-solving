#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, sum=0, neg=0, mn=INT_MAX;
        cin >> n;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
            if(mn>abs(v[i]))
                mn = abs(v[i]);
            if(v[i]<0)
                neg++;
        }
        if(neg%2 == 0)
            cout << sum <<'\n';
        else
        {
            cout << sum-(2*mn) <<'\n';
        }

    }
    

    return 0;
}
