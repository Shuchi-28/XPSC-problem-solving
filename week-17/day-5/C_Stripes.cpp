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
        int flag=0, cntR=0;
        for (int i=0; i<8; i++)
        {
            for (int j=0; j<8; j++)
            {
                char x;
                cin >> x;
                if(x=='R')
                    cntR++;
            }
            if(cntR==8)
                flag = 1;
            else
                cntR = 0;
        }
        
        if(flag)
            cout << "R" <<endl;
        else
            cout << "B" <<endl;
        
    }


    return 0;
}
