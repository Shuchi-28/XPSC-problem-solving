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
        deque<int> dq;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        int mx = n;
        int mn = 1;
        int l = 0, r = n-1;
        while (!dq.empty())
        {   
            if (dq.front()==mx)
            {
                dq.pop_front();
                mx--;
                l++;
            }
            else if (dq.front()==mn)
            {
                dq.pop_front();
                mn++;
                l++;
            }
            else if (dq.back()==mx)
            {
                dq.pop_back();
                mx--;
                r--;
            }
            else if (dq.back()==mn)
            {
                dq.pop_back();
                mn++;
                r--;
            }
            else{
                break;
            }
            
        }
        if (l<=r)
        {
            cout << l+1 <<" " << r+1 <<'\n';
        }
        else{
            cout << "-1" <<'\n';
        }
    }
    

    return 0;
}