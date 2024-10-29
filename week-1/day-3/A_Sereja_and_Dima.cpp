#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s=0, d=0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int i=0, j=n-1, k=0;
    while (i<=j)
    {
        if (k%2==0)
        {
            if (arr[i]>arr[j])
            {
                s += arr[i];
                i++;
            }
            else{
                s += arr[j];
                j--;
            }
            k++;
        }
        else{
            if (arr[i]>arr[j])
            {
                d += arr[i];
                i++;
            }
            else{
                d += arr[j];
                j--;
            }
            k++;
        }
        
    }
    

    cout << s << " " << d;
    

    return 0;
}