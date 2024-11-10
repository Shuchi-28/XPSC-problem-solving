#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        long long int n, sum=0;
        cin >> n;
        int arr[n];
        priority_queue<int> pq;
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i<n; i++)
        {
            if (arr[i]==0 && pq.size()>0)
            {
                sum += pq.top();
                pq.pop();
            }
            else{
                pq.push(arr[i]);
            }
        }
        
        cout << sum <<'\n';
        
    }


    return 0;
}