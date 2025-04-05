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
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> arr;
        arr.push_back(a);

        int x = n;
        for (int i=2; i<=n/2; i++)
        {
            while(x==a || x==b)
                x--;
            arr.push_back(x);
            x--;
        }
        
        x = 1;
        for (int i=n/2+1; i<=n; i++)
        {
            while(x==a || x==b)
                x++;
            arr.push_back(x);
            x++;
        }
        arr[n-1] = b;
        
        int f = 0;
        for(int i=0; i<n/2; i++)
        {
            if(arr[i]<a)
                f = 1;
        }
        for(int i=n/2; i<n; i++)
        {
            if(arr[i]>b)
                f = 1;
        }
            
        if(f==1)
        {
            cout << "-1\n";
        }
        else{
            for(int x: arr)
            {
                cout << x <<" ";
            }
            cout << '\n';
        }
        
    }


    return 0;
}
