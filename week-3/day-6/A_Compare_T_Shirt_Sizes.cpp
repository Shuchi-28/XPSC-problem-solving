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
        string s, ss;
        cin >> s >> ss;

        if (s[s.size()-1] > ss[ss.size()-1])
        {
            cout << "<\n";
        }
        else if (s[s.size()-1] < ss[ss.size()-1])
        {
            cout << ">\n";
        }
        else{
            if (s[s.size()-1]=='S')
            {
                if (s.size() > ss.size())
                {
                    cout << "<\n";
                }
                else if(s.size() < ss.size())
                {
                    cout << ">\n";
                }
                else{
                    cout << "=\n";
                }
            }
            else{
                if (s.size() > ss.size())
                {
                    cout << ">\n";
                }
                else if(s.size() < ss.size())
                {
                    cout << "<\n";
                }
                else{
                    cout << "=\n";
                }
            }
        }

    }
    


    return 0;
}