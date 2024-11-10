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
        int n,cn=1;
        cin >> n;
        priority_queue<int> pq;
        vector<int> v;
        for (int i=1; i<=n; i++)
        {
            pq.push(i);
        }
        for (int i=1; i<n; i++)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            v.push_back(x);
            v.push_back(y);
            int z = (x+y+1)/2;
            pq.push(z);
        }
        
        cout << pq.top() <<'\n';
        for (int a: v)
        {
            if (cn<3)
            {
                cout << a <<" ";
                cn++;
            }
            if (cn==3)
            {
                cout <<'\n';
                cn=1;
            }
            
        }
    }
    
    


    return 0;
}