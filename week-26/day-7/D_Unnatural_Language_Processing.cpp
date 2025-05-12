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

        string ss;
        cin >> ss;

        for (int i=0; i<n; i++)
        {
            if (ss[i]=='a'|| ss[i]=='e')
            {
                if ((ss[i+3]=='a'||ss[i+3]=='e') && i+3<n)
                {
                    cout << ss[i] << ss[i+1] << ".";
                    i++;
                }
                else{
                    cout << ss[i];
                    if(i!=n-1 && (i+2) != n) 
                        cout << ".";
                }
            }
            else{
                cout << ss[i];
            }
        }
        cout <<'\n';

    }



    return 0;
}
