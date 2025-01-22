#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int A = count(s.begin(),s.end(),'A');
        int B = count(s.begin(),s.end(),'B');
        int C = count(s.begin(),s.end(),'C');
        int D = count(s.begin(),s.end(),'D');
        int q = count(s.begin(),s.end(),'?');

        int ans = min(n,A) + min(n,B) + min(n,C) + min(n,D);

        cout << ans <<'\n';
    }
    


    return 0;
}
