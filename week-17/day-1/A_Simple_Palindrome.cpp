#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s = "", vowels = "aeiou";
        int over = n/5;
        int mod = n%5;
        while (over--)
        {
            s += vowels;
        }
        for (int i=0; i<mod; i++)
        {
            s += vowels[i];
        }
        
        sort(s.begin(), s.end());
        cout << s <<endl;
    }

    
    return 0;
}
