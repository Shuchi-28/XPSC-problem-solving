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
        int x;
        cin >> x;
        
        vector<int> v(31,0);
        for (int i=0; i<30; i++)
        {
            if(1LL & (x>>i))
            {
                if (v[i])
                {
                    v[i+1] = 1;
                    v[i] = 0;
                }
                else if (i>0)
                {
                    if (v[i-1]==1)
                    {
                        v[i+1] = 1;
                        v[i-1] = -1;
                    }
                    else{
                        v[i] = 1;
                    }
                }
                else if (i == 0)
                {
                    v[i] = 1;
                }
                
            }
            
        }
        cout << 31 <<'\n';
        for (int a: v)
        {
            cout << a <<" ";
        }
        cout <<'\n';

    }


    return 0;
}
