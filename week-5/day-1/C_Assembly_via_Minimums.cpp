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
        int n, f=0;
        cin >> n;
        int x = (n*(n-1))/2;
        int a[x];
        for (int i=0; i<x; i++)
        {
            cin >> a[i];
        }
        sort(a,a+x);
        int k = n-1, ind = 0;
        for(int i=0; i<n-1; i++)
        {
            int mini = 1e9;
            for (int j=0; j<k; j++)
            {
                mini = min(a[ind], mini);
                ind++;
            }
            k--;
            cout << mini <<" ";
        }
        cout << 1000000000 <<" ";
        cout <<'\n';
    }


    return 0;
}
