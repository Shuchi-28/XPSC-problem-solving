
//https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k;
    cin >> s >> k;

    int n=s.size(), l=0, r=0, ans=-1;
        map<char,int> cnt;
        
        while(r<n)
        {
            cnt[s[r]]++;
            if(cnt.size()==k)
            {
                ans=max(ans,r-l+1);
            }
            else{
                while(cnt.size()>k && l<=r){
                    cnt[s[l]]--;
                    if(cnt[s[l]]==0)
                        cnt.erase(s[l]);
                    l++;
                }
            }
            r++;
            
        }
        cout << ans;


    return 0;
}