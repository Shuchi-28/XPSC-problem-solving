#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    cin >> t >> n;

    string s ="", ans ="", x="";
    vector<string> v;
    while (t--)
    {
        string a;
        cin >> a;

        v.push_back(a);
    }
    int ff = 0;
    
    for (int i=0; i<v.size(); i++)
    {
        int f =0;
        for (int j=i+1; j<v.size(); j++)
        {
            reverse(v[j].begin(), v[j].end());
            if (v[i]==v[j])
            {
                ans += v[i];
                f=1;
            }
            reverse(v[j].begin(), v[j].end());
        }
        if(f==0)
        {
            string ll = v[i];
            reverse(ll.begin(), ll.end());
            if(ll==v[i] && ff ==0)
            {
                x += v[i];
                ff = 1;
            }
        }
        
    }
    
    string temp = ans;
    reverse(temp.begin(), temp.end());

    ans += x;
    ans+= temp;

    if(ans.size()==0)
        cout << 0 <<'\n';
    else
    {
        cout << ans.size() <<'\n';
        cout << ans <<'\n';
    }

    return 0;
}
