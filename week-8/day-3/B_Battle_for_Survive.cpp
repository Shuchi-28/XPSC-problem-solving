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
        long long sum=0, slast, last;
        for (int i=0; i<n-2; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        cin >> slast;
        slast -= sum;
        cin >> last;
        last -= slast;
        
        cout << last <<'\n';
    }
    

    return 0;
}
