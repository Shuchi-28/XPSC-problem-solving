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
        string s;
        cin >> s;
        stack<int> up, low;
        map<int, char> m;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]=='B')
            {
                if (!up.empty())
                {
                    int indx = up.top();
                    m.erase(indx);
                    up.pop();
                }
                continue;
            }
            if (s[i]=='b')
            {
                if (!low.empty())
                {
                    int indx = low.top();
                    m.erase(indx);
                    low.pop();
                }
                continue;
            }
            m[i] = s[i];
            if (isupper(s[i]))
            {
                up.push(i);
            }
            else{
                low.push(i);
            }
        }
        for (auto x : m)
        {
            cout << x.second;
        }
        
        cout <<'\n';
    }
    

    return 0;
}