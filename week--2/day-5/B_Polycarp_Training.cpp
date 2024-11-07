#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    multiset<int> s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    int ans = 0, problem = 1;
    while (!s.empty())
    {
        auto LB = s.lower_bound(problem);
        if (LB != s.end())
        {
            ans++;
            s.erase(LB);
        }
        else{
            break;
        }
        problem++;
    }
    

    cout << ans <<'\n';

    return 0;
}