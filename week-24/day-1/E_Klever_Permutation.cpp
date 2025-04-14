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
        int n, k;
        cin >> n >> k;
        
        vector<int> v(n);
        int x = 1;
        for (int i=0; i<k; i++)
        {
            if(i%2==0)
            {
                for (int j=i; j<n; j+=k)
                {
                    v[j] = x;
                    x++;
                }
            }
            else{
                int l = i;
                while (l+k<n)
                {
                    l += k;
                }
                for (int j=l; j>=0; j-=k)
                {
                    v[j] = x;
                    x++;
                }
                
            }
        }

        for (int i=0; i<n; i++)
        {
            cout << v[i] <<" ";
        }
            
        cout <<'\n';
        
    }
    

    return 0;
}
