#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> st;
        for (int i=0; i<m; i++)
        {
            int x;
            cin >> x;
            st.insert(x-1);
        }
        
        string c;
        cin >> c;

        sort(c.begin(),c.end());

        int j = 0;
        for (int i : st)
        {
            s[i] = c[j];
            j++;
        }
        cout << s <<'\n';

    }
    

    return 0;
}
//https://codeforces.com/contest/1986/problem/C