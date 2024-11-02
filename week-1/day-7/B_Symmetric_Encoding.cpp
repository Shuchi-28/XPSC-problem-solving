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
        int n;
        cin >> n;
        string s,r,f;
        cin >> s;

        set<char> st;
        for (char ch: s)
        {
            st.insert(ch);
        }
        for (char ch: st)
        {
           r.push_back(ch);
        }
        int x = r.size()-1;
        map<char, char> mp;
        for (int i=0; i<=x; i++)
        {
            mp[r[i]] = r[x-i];
        }
        for (int i=0; i<n; i++)
        {
            f.push_back(mp[s[i]]);
        }
        cout << f <<endl;
    }
    

    return 0;
}