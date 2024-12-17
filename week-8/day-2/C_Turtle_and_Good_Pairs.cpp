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
        
        string ss;
        cin >> ss;
        map<char, int> m;
        for (int i=0; i<n; i++)
        {
            m[ss[i]]++;
        }

        while (n>0)
        {
            for (char i='a'; i<='z'; i++)
            {
                if (m[i]>0)
                {
                    cout << i;
                    m[i]--;
                    n--;
                }
            }
            
        }
        cout <<'\n';
        
    }

    return 0;
}
