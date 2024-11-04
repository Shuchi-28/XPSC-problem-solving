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
        int n, k, cnt=0;
        cin >> n >> k;
        string s;
        cin >> s;
        int freq[26]={0};

        for (int i=0; i<n; i++)
        {
            int val = s[i]-'a';
            freq[val]++;
        }
        for (int i=0; i<26; i++)
        {
            if (freq[i]%2!=0)
            {
                cnt++;
            }
        }

        if (cnt<=k+1)
        {
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" <<'\n';
        }
        
    }
    

    return 0;
}