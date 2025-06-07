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
        string a, b;
        cin >> a >> b;

        if(a.front()==b.front())
        {
            cout << "YES\n";
            cout << a.front() << "*\n";
        }
        else if(a.back()==b.back())
        {
            cout << "YES\n";
            cout << "*" << a.back() << "\n";
        }
        else
        {
            int f = 0;
            for (int i=0; i<a.size()-1; i++)
            {
                for (int j=0; j<b.size()-1; j++)
                {
                    if(a[i]==b[j] && a[i+1]==b[j+1])
                    {
                        cout << "YES\n";
                        cout << "*" << a[i] << a[i+1] << "*\n";
                        f = 1;
                        break;
                    }
                }
                if(f)
                    break;
            }
            if(f==0)
                cout << "NO\n";
        }          

    }
    

    return 0;
}