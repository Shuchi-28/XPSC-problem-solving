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
        int n,k=0;
        cin >> n;
        int arr[n];

        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            for (int j=0; j<x; j++)
            {
                if (s[j]=='D')
                {
                    arr[k]++;
                    if (arr[k]==10)
                    {
                        arr[k] = 0;
                    }
                    
                }
                else if (s[j]=='U')
                {
                    arr[k]--;
                    if (arr[k]==-1)
                    {
                        arr[k] = 9;
                    }
                    
                }
                
            }
            k++;
        }
        
        for (int i=0; i<n; i++)
        {
            cout << arr[i] <<" ";
        }
        cout <<'\n';
    }
    

    return 0;
}