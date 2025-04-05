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

        string a, b;
        cin >> a >> b;

        int cnt = 0, j = 0;
        for (int i=0; i<m; i++)
        {
            if (a[j]==b[i])
            {
                cnt++;
                j++;
            }
            
        }

        cout << cnt <<'\n';
    }
    

    return 0;
}
