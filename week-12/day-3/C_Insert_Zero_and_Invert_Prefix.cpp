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

        int arr[n+3];
        for (int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }
        
        vector<int> ans;
        if(arr[n]==1)
            cout << "NO\n";
        else{
            cout << "YES\n";
            for (int i=n; i>0; i--)
            {
                vector<int> v;
                if (i==1)
                {
                    if(arr[i]==0)
                        ans.push_back(0);
                }
                else{
                    if (arr[i]==0 && arr[i-1]==1)
                    {
                        v.push_back(0);
                        v.push_back(1);
                        i -= 2;
                        while (i>0 && arr[i]==1)
                        {
                            v.push_back(1);
                            i--;
                        }
                        i++;
                        for (int j=1; j<v.size(); j++)
                        {
                            ans.push_back(0);
                        }
                        ans.push_back(v.size()-1);
                    }
                    else
                        ans.push_back(0);
                }
                
            }
            
            for (int i=0; i<ans.size(); i++)
            {
                cout << ans[i] <<" ";
            }
            cout << "\n";
        }
        
        
    }


    return 0;
}
