#include<bits/stdc++.h>
using namespace std;

long long int nextPrime(int x)
{
    for (long long int i=x; ; i++)
    {
        bool f = true;
        for (int j=2; j*j<=i; j++)
        {
            if (i%j==0)
            {
                f = false;
                break;
            }            
        }
        if(f) return i;
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int d;
        cin >> d;

        long long int p = nextPrime(1 + d);
        long long int q = nextPrime(p + d);
        long long int pq = p * q;
        long long int p3 = p*p*p;

        cout << min(p3, pq) <<endl;
    }

    return 0;
}
