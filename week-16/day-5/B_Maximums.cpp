#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> b(n);
    for (int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    
    int x = 0;

    for (int i=0; i<n; i++)
    {
        int ai = b[i]+x;
        cout << ai <<" ";

        x = max(x, ai);
    }
    

    return 0;
}
