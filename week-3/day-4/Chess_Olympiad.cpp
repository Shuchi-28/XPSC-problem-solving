#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y, z;
    cin >> x >> y >> z;

    int g = x + y + z;
    int a = 4-g;
    
    x += a;

    if (x>z)
    {
        cout << "Yes" <<'\n';
    }
    else{
        cout << "No" <<'\n';
    }
    
    return 0;
}