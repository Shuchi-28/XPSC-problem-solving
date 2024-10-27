#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (a<b)
    {
        cout << (b-a)+1 <<endl;
    }
    else if (a==b)
    {
        cout << 1 <<endl;
    }
    else{
        cout << 0 <<endl;
    }
    

    return 0;
}