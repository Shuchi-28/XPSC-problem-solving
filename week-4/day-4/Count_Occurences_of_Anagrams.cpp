#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, ss;
    cin >> s >> ss;

    int k = ss.size(), n = s.size(), cnt=0;
    vector<int> t(26,0);
    vector<int> p(26,0);

    for (int i=0; i<k; i++)
    {
        t[s[i]-'a']++;
        p[ss[i]-'a']++;
    }
    if (t==p)
    {
        cnt++;
    }
    
    for (int i=k; i<n; i++)
    {
        t[s[i]-'a']++;
        t[s[i-k]-'a']--;
        if(t==p)
            cnt++;
    }
    
    cout << cnt <<'\n';

    return 0;
}