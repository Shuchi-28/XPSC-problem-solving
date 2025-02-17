#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, sum=0, p=0, nn=0;
        cin >> n;
        vector<int> v(n);
        vector<int> pos;
        vector<int> neg;
        vector<int> zero;

        for (int i=0; i<n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        for (int i=0; i<n; i++)
        {
            if(v[i]>0)
            {
                pos.push_back(v[i]);
                p += v[i];
            }
            if(v[i]<0)
            {
                neg.push_back(v[i]);
                nn += v[i];
            }
            if(v[i]==0)
                zero.push_back(v[i]);
        }
        if (sum == 0)
        {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            if (p>abs(nn))
            {
                for(int x: pos)
                    cout << x << " ";
                for(int x: neg)
                    cout << x << " ";
                for(int x: zero)
                    cout << x << " ";
            }
            else if (p<abs(nn))
            {
                for(int x: neg)
                    cout << x << " ";
                for(int x: pos)
                    cout << x << " ";
                for(int x: zero)
                    cout << x << " ";
            }
            
            cout <<'\n';
        }
        
    }
    

    return 0;
}
