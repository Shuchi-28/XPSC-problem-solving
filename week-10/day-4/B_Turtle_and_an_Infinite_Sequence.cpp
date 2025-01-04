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
        int n, m;
        cin >> n >> m;
        
        long long int ans = 0;
        int left = n - m;
        if (left < 0)
            left = 0;
        int right = n + m;

        if (n==0 && m==0)
        {
            cout << "0" <<'\n';
        }

        else
        {
            for (int i=0; i<=32; i++)
            {
                long long block_size = 1LL << i;
                long long int left_index = left/block_size;
                long long int right_index = right/block_size;

                if (right_index % 2 != 0 || left_index != right_index)
                {
                    ans |= block_size;
                }
                
            }
            
            cout << ans <<'\n';
        }
        

    }
    


    return 0;
}
