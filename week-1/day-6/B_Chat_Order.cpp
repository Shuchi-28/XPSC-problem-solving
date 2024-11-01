#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    stack<string> st;
    map<string, int> mp;
    for (int i=1; i<=t; i++)
    {
        string s;
        cin >> s;
        st.push(s);

    }
    
    for(int i=0; i<t; i++)
    {
        string x = st.top();
        st.pop();

        mp[x]++;
        if (mp[x]==1)
        {
            cout << x <<'\n';
        }
    }
    

    return 0;
}