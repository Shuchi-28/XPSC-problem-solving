#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t; cin>>t;
    while(t--){
        long long n; 
        cin>>n;
        map<long long,long long> m;
        vector<long long> v(n);
        
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0; i<n; i++)
        {
            long long value=v[i];
            if(m[v[i]]!=0)
            {
                ans++;
                while(m[value]>0)
                {
                    m[value]--;
                    value++;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}