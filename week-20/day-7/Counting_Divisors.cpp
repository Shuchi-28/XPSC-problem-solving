#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e6+9;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> divisor(maxN);
    for (int i=1; i<=maxN; i++)
    {
        for (int j= i; j<maxN; j+=i)
        {
            divisor[j]++;
        }
        
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << divisor[n] <<'\n';
    }
    

    return 0;
}
