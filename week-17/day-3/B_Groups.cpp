#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, flag=0;
        cin >> n;

        int arr[n][5];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<5; j++)
            {
                cin >> arr[i][j];
            }
            
        }

        for (int d1=0; d1<5; d1++)
        {
            for (int d2=d1+1; d2<5; d2++)
            {
                int cntd1=0;
                int cntd2=0;
                int common=0;
                for (int i=0; i<n; i++)
                {
                    if (arr[i][d1]==1)
                        cntd1++;
                    
                    if (arr[i][d2]==1)
                        cntd2++;
                    if(arr[i][d1] && arr[i][d2])
                        common++;
                }
                if(cntd1>=n/2 && cntd2>=n/2 && (cntd1+cntd2-common == n))
                {
                    flag = 1;
                }

            }
        }
        
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";

        
    }
    

    return 0;
}
