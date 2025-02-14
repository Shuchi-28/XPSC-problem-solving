#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt1=0, cnt2=0, last=0, ans=0;
    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i=0; i<n; i++)
    {
        if(arr[i]!=last)
        {
            if (arr[i]==1)
            {
                cnt1=0;
                cnt1++;
            }
            else{
                cnt2 = 0;
                cnt2++;
            }
            last = arr[i];
        }
        else{
            if (arr[i]==1) 
                cnt1++;
            else
                cnt2++;
        }
        ans = max(ans,min(cnt1,cnt2)*2);
    }

    cout << ans <<'\n';
    

    return 0;
}
