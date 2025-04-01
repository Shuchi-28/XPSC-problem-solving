#include<bits/stdc++.h>
using namespace std;
vector<long long> divisor(long long n)
{
    vector<long long> v;
    for (int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(n/i != i)
                v.push_back(n/i);
        }
    }
    return v;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, l;
        cin >> a >> b >> l;

        vector<long long> k = divisor(l);
        vector<long long> x, y;

        for (int i=0; i<=20; i++)
        {
            long long comp = pow(a,i);
            if(comp<=1e6)
                x.push_back(comp);
            else
                break;
        }
        for (int i=0; i<=20; i++)
        {
            long long comp = pow(b,i);
            if(comp<=1e6)
                y.push_back(comp);
            else
                break;
        }

        int cnt =0;

        for (int i=0; i<k.size(); i++)
        {
            int f=0;
            for (int j=0; j<x.size(); j++)
            {
                for (int m=0; m<y.size(); m++)
                {
                    if((k[i]*x[j]*y[m])==l)
                    {
                        cnt++;
                        f = 1;
                        break;
                    }
                }
                if(f==1)
                    break;
            }
        }
        
        cout << cnt <<'\n';

    }
    

    return 0;
}
