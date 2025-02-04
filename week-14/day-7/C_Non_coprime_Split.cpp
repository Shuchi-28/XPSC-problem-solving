#include<bits/stdc++.h>
using namespace std;

int smallestDivi(long long n)
{
    while (n%2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (int i=3; i*i<=n; i+=2)
    {
        while (n%i == 0)
        {
            return i;
            n /= i;
        }
        
    }
    if(n>2)
        return n;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (r <= 3)
        {
            cout << -1 <<'\n';
        }
        else{
            if (l < r)
            {
                if (r%2==1)
                {
                    r--;
                }
                cout << 2 <<" " << r-2 <<endl;
            }
            else{
                long long div = smallestDivi(l);
                if (div == l)
                {
                    cout << -1 <<'\n';
                }
                else{
                    cout << div << " " << l-div <<'\n';
                }
                
            }
            
        }
        
    }
    
    
    
    return 0;
}
