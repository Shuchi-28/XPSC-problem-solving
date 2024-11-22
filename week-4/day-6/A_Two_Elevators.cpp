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
        int a, b, c;
        cin >> a >> b >> c;
        a = a-1;
        b = abs(b-c) + (c-1);
        if (a == b)
        {
            cout << "3\n";
        }
        else if (a<b)
        {
            cout << "1\n";
        }
        else{
            cout << "2\n";
        }
    }
    


    return 0;
}