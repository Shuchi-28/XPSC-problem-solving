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
        int arr[n], bit[30];

        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for (int i=0; i<30; i++)
        {
            bit[i] = 0;
        }

        for (int i=0; i<30; i++)
        {
            long long num = (1LL << i);
            for (int j=0; j<n; j++)
            {
                if ((arr[j]&num) != 0)
                {
                    bit[i]++;
                }
            }
        }
        for (int k=1; k<=n; k++)
        {
            bool flag=0;
            for (int i=0; i<30; i++)
            {
                if ((bit[i]%k) != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << k <<" ";
            }
            
        }
        cout <<'\n';
        
    }
    

    return 0;
}
