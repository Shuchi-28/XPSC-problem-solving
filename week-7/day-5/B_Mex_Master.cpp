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
        int n, zero=0, one=0, gret=0;
        cin >> n;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if (x==0)
            {
                zero++;
            }
            if(x==1)
            {
                one++;
            }
            if (x>1)
            {
                gret = 1;
            }
            
        }

        int notZero = n-zero;
        if (zero>notZero+1)
        {
            if (one==0)
            {
                cout << "1" <<endl;
            }
            else{
                if (gret)
                {
                    cout << "1" <<endl;
                }
                else
                    cout << "2" <<endl;
            }
        }
        else{
            cout << "0" <<endl;
        }
    }


    return 0;
}