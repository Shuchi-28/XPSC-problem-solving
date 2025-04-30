#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> dif;
    for(int i=0; i<n; i++)
    {
        int l, r;
        cin >> l >> r;

        dif[l]++;
        dif[r+1]--;
    }

    long long flag=0, sum=0;
    for(auto x: dif)
    {
        sum += x.second;
        if(sum>2)
            flag = 1;
    }

    if(flag)
        cout << "NO\n";
    else
        cout << "YES\n";

        
    return 0;
}
