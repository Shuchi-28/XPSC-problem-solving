#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = 4-s.size();
    for (int i=0; i<n; i++)
    {
        s = "0"+ s;
    }
    
    cout << s <<'\n';

    return 0;
}