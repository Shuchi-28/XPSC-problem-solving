#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int firstB=1, lastA=(3*n)-1;
        cout << (n+1)/2 <<'\n';
        while (lastA>firstB)
        {
            cout <<firstB <<" " <<lastA <<'\n';
            firstB +=3;
            lastA -=3;
        }
        
    }
    

    return 0;
}
