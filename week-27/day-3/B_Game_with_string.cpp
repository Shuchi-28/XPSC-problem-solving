#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    int cnt = 0;
    stack<int> st;
    
    for (int i=0; i<s.size(); i++)
    {
        if(!st.empty() && s[i]==st.top())
        {
            st.pop();
            cnt++;
        }
        else
            st.push(s[i]);
    }
    
    if(cnt%2 == 0)
        cout << "No\n";
    else
        cout << "Yes\n";


    return 0;
}
