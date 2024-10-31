#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<string, string> has, ans;
    while (n--)
    {
        string a, b;
        cin >> a >> b;

        if (has.find(a) != has.end())
        {
            string s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else{
            ans[a] = b;
            has[b] = a;
        }

    }
    
    cout << ans.size() <<'\n';
    for (auto x: ans)
    {
        cout << x.first << " " <<x.second <<'\n';
    }

    return 0;
}