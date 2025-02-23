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
        int n, flag=0;
        cin >> n;
        
        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        int lasNum = 0;
        for (int i=0; i<n; i++)
        {
            if(lasNum>v[i])
            {
                flag = 1;
                break;
            }
            else{
                int first = v[i]/10;
                int second = v[i]%10;
                if(first>= lasNum)
                {
                    if(second>=first)
                        lasNum = second;
                    else
                        lasNum = v[i];
                }
                else{
                    lasNum = v[i];
                }
                
            }
            
        }

        if(flag)
            cout <<"NO\n";
        else
            cout << "YES\n";
        
    }
    


    return 0;
}