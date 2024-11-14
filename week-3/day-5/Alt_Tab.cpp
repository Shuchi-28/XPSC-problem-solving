#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    stack<string> stk;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        stk.push(s);
    }
    map<string, int> mp;
    for(int i=0; i<n; i++)
    {
        string a = stk.top();
        stk.pop();
        mp[a]++;
        if (mp[a]==1)
        {
            cout << a[a.size()-2] << a[a.size()-1];
        }
        
    }
    
    
    return 0;
}