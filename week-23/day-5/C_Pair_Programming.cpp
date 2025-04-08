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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n), b(m), v;
        for (int i=0; i<n; i++)
        {
            cin >> a[i]; 
        }
        for (int i=0; i<m; i++)
        {
            cin >> b[i]; 
        }

        int f = 0, i=0, j=0;
        
        while (i<n || j<m)
        {
            if(i<n && j<m)
            {
                if(a[i]==0)
                {
                    v.push_back(0);
                    i++;
                    k++;
                }
                else if (b[j]==0)
                {
                    v.push_back(0);
                    j++;
                    k++;
                }
                else if (a[i]<b[j])
                {
                    if(a[i]<=k)
                    {
                        v.push_back(a[i]);
                        i++;
                    }
                    else{
                        f=1;
                        break;
                    }
                }
                else if (b[j]<=a[i])
                {
                    if(b[j]<=k)
                    {
                        v.push_back(b[j]);
                        j++;
                    }
                    else{
                        f=1;
                        break;
                    }
                }
            }
            else if(i<n)
            {
                if(a[i]==0)
                {
                    v.push_back(0);
                    i++;
                    k++;
                }
                else if (a[i]<=k)
                {
                    v.push_back(a[i]);
                    i++;
                }
                else
                {
                    f=1;
                    break;
                }
                
            }
            else if(j<m)
            {
                if(b[j]==0)
                {
                    v.push_back(0);
                    j++;
                    k++;
                }
                else if (b[j]<=k)
                {
                    v.push_back(b[j]);
                    j++;
                }
                else
                {
                    f=1;
                    break;
                }
                
            }
            
        }
        
        if(f)
        {
            cout << -1 <<'\n';
            continue;
        }
        for (int x: v)
        {
            cout << x <<" ";
        }
        
        cout << '\n';
        
    }
    


    return 0;
}
