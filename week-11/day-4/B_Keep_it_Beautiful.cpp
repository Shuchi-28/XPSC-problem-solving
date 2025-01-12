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
        int n, flag = 0;
        cin >> n;
        
        vector<int> arr(n);
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        string s ="1";
        int i=0, j=1;
        while(j<n)
        {
            if (flag == 1)
            {
                if(arr[j] <= arr[0] && arr[i] <=arr[j])
                {    
                    s +="1";
                    i = j;
                }
                else
                    s += "0";
                j++;
            }
            else if (arr[j] >= arr[i])
            {
                s += "1";
                i=j;
                j++;
            }
            else if (arr[j]<=arr[0])
            {
                s += "1";
                flag = 1;
                i=j;
                j++;
            }
            else{
                s += "0";
                j++;
            }
            
        }
        
        cout << s <<'\n';

    }
    
    

    return 0;
}
