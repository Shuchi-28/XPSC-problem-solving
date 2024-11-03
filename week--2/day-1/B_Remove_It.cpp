#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, d;
    cin >> n >> d;

    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        if (a!=d)
        {
            cout << a <<" ";
        }
    }
    

    return 0;
}