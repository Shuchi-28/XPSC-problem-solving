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
        int n;
        cin >> n;
        int a[n], b[n];
        map<int, int> m;
        vector<int> ones;
        vector<int> zeros;

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            m[a[i]] = i;
        }
        string s;
        cin >> s;

        for (int i=0; i<n; i++)
        {
            if (s[i]=='0')
            {
                zeros.push_back(a[i]);
            }
            else{
                ones.push_back(a[i]);
            }
        }
        sort(zeros.begin(),zeros.end(),greater<int>());
        sort(ones.begin(),ones.end(),greater<int>());
        sort(a,a+n, greater<int>());

        int i;
        for ( i=0; i<ones.size(); i++)
        {
            b[m[ones[i]]] = a[i];
        }
        for (int j=0; j<zeros.size(); j++)
        {
            b[m[zeros[j]]] = a[i];
            i++;
        }
        for (int i=0; i<n; i++)
        {
            cout << b[i] <<" ";
        }
        
        
        cout <<'\n';

    }
    

    return 0;
}