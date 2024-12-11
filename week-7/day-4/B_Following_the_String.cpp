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
        int arr[n];
        map<int,char> mp;
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = 'a';
        }
        for (int i=0; i<n; i++)
        {
            cout << mp[arr[i]];
            mp[arr[i]]++;
        }
        cout << '\n';
    }
    


    return 0;
}