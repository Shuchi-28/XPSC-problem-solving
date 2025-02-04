#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    long long ara[n+1];
    long long mx = 0;

    for(int i = 0;i < n;i++){
        cin>>ara[i];
        if(ara[i] > mx){
            mx = ara[i];
        }
    }
    long long z = 0;
    for(int i = 0;i < n;i++){
        if(ara[i] == mx){
            continue;
        }
        else{
            z = __gcd(z,mx-ara[i]);
        }
    }

    long long y = 0;
    for(int i = 0;i < n;i++){
        y+= (mx-ara[i]);
    }
    
    cout<< y/z <<" "<< z <<endl;
    
    return 0;
}
