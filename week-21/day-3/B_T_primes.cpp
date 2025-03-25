#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long x)
{
    if(x==1)
        return false;
    for (int i=2; i*i<=x; i++)
    {
        if(x%i == 0)
            return false;
    }

    return true;
}

bool isPerfectSqure(long long x)
{
    long long n = sqrtl(x);
    
    return (n*n) == x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        long long x;
        cin >> x;

        if(isPerfectSqure(x) && isPrime(sqrtl(x)))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    
    
    return 0;
}
