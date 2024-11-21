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
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int i=1; i<n; i++)
        {
            if (s[i]!=s[i-1])
            {
                cnt++;
            }
        }

        cout << (cnt+1)/2 <<'\n';
    }
    

    return 0;
}