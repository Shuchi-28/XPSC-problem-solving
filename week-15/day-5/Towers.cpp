#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, temp;
    cin >> n;
    vector<int> v;
    for (int i=0; i<n; i++)
    {
        cin >> temp;
        auto it = upper_bound(v.begin(),v.end(), temp);
        if (it==v.end())
        {
            v.push_back(temp);
        }
        else{
            *it = temp;
        }
    }
    
    cout << v.size() <<endl;
    return 0;
} 
