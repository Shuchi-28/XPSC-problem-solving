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
        string ss;
        cin >> ss;

        bool flag = true;
        int n = ss.length();
        for (int i=0; i<n-1; i++)
        {
            if (ss[i]==ss[i+1])
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "YES" <<endl;
            for (int i=0; i<n; i++)
            {
                cout << "()";
            }
            cout <<endl;
            continue;
        }
        if (n==2)
        {
            if (ss == "()")
            {
                cout << "NO" <<endl;
                continue;
            }
             
            cout << "YES" <<endl;
            cout << "(())" <<endl;
            continue;
        }

        cout << "YES" <<endl;
            
        for (int i=0; i<n; i++)
        {
            cout << "(";
        }
        for (int i=0; i<n; i++)
        {
            cout << ")";
        }
        cout <<endl;
        
    }


    return 0;
}
