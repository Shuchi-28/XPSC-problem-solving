#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, n;
    cin >> x >> n;

    set<int> pos;
    multiset<int> len;
    pos.insert(0);
    pos.insert(x);
    len.insert(x-0);

    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        pos.insert(a);
        auto it = pos.find(a);

        int preVal = *prev(it);
        int nextVal = *next(it);
        len.erase(len.find(nextVal-preVal));

        len.insert(a-preVal);
        len.insert(nextVal-a);

        cout << *len.rbegin() <<" ";
    }
    

    return 0;
}
