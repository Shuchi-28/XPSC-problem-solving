#include<bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1


int main()
{
    int n, k;
    cin >> n >> k; // k = the size of window
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int l=0, r=0;

    vector<int> ans;
    queue<int> q;

    while (r<n)
    {
        if (arr[r]<0)
        {
            q.push(arr[r]);
        }
        if (r-l+1==k)
        {
            if (!q.empty())
            {
                ans.push_back(q.front());
                if (arr[l]==q.front())
                {
                    q.pop();
                }
                
            }
            else{
                ans.push_back(0);
            }
            l++;
            r++;
        }
        else{
            r++;
        }

    }
    
    for(int a: ans)
    {
        cout << a <<" ";
    }

    return 0;
}