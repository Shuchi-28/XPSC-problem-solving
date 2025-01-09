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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int one = count(s.begin(),s.end(),'1');
        int zero = count(s.begin(),s.end(),'0');

        int cnt = min(one, zero);
        if (cnt%2 == 0)
        {
            cout << "Ramos" <<'\n';
        }
        else{
            cout << "Zlatan" <<'\n';
        }

    }


    return 0;
}
