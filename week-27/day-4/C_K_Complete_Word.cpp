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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = 0;
        for (int i=0; i<k/2; i++)
        {
            vector<int> freq(26,0);
            for (int j=0; j+k-1<n; j+=k)
            {
                int i1 = i+j;
                int i2 = j+(k-i-1);

                freq[s[i1]-'a']++;
                freq[s[i2]-'a']++;
            }

            int req = 2*(n/k);
            int mx = *max_element(freq.begin(), freq.end());

            ans += req - mx;
        }

        if(k&1)
        {
            vector<int> freq(26,0);
            for (int i=k/2; i<n; i+=k)
            {
                freq[s[i]-'a']++;

            }

            int req = (n/k);
            int mx = *max_element(freq.begin(), freq.end());

            ans += req - mx;
        }

        cout << ans <<'\n';
        
    }
    


    return 0;
}
