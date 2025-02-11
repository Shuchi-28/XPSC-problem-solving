#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, caseno = 0;
    while (cin >> n >> q && (n != 0 || q != 0)) 
    {
        caseno++;
        vector<int> marbles(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> marbles[i];
        }
        
        sort(marbles.begin(), marbles.end());
        
        cout << "CASE# " << caseno << ":" << endl;
        
        while (q--) 
        {
            int query;
            cin >> query;
            
            auto it = lower_bound(marbles.begin(), marbles.end(), query);
            
            if (it != marbles.end() && *it == query) 
            {
                cout << query << " found at " << (it - marbles.begin() + 1) << endl;
            } 
            else {
                cout << query << " not found" << endl;
            }
        }
    }

    
    return 0;
}
