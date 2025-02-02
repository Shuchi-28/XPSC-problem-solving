#include<bits/stdc++.h>
using namespace std;
long long LCM(long long a, long long b) 
{
   
   return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    
    long long a, b;
    for (int i = 1; i*i <= n;i++) 
    {
        if (n%i)
            continue;
        long long x = i, y =n/i;
        if (__gcd(x, y)==1)
        {
            a = x;
            b = y;
        }
    }
    
    cout << a << " " << b <<'\n';

    return 0;
}
