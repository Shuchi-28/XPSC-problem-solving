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

        priority_queue<long long> p, q;
        long long int sum = 0;
        for (int i = 0; i<n; i++)
        {
            long long x;
            cin >> x;
            p.push(x);
            sum += x;
        }
        
        
        q.push(sum);
        for (int i=1; i<=n-1; i++)
        {
            if(i==1)
            {
                long long x = q.top();
                q.pop();
                long long a = x/2;
                long long b = x-a;
                q.push(a);
                q.push(b);
            }
            else{
                while (p.size() && q.size() && p.top()==q.top())
                {
                    p.pop();
                    q.pop();
                }
                long long x = q.top();
                q.pop();
                long long a = x/2;
                long long b = x-a;
                q.push(a);
                q.push(b);
                while (p.size() && q.size() && p.top()==q.top())
                {
                    p.pop();
                    q.pop();
                }
            }
        }
        while (p.size() && q.size() && p.top()==q.top())
        {
            p.pop();
            q.pop();
        }
        if(p.size()==0 && q.size()==0)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    

    return 0;
}
