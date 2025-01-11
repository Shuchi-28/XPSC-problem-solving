#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,f=0;
    cin >> n;
    string s = "";

    for (int i=0; i<n/2; i++)
    {
        if(i%2==0)
            s += "aa";
        else
            s += "bb";
    }
    
    if (n%2==1 && ((n/2)%2)==0)
    {
        s += "a";
    }
    else if (n%2==1 && ((n/2)%2)==1)
    {
        s += "b";
    }
    
    cout << s <<'\n';    
    
    
    return 0;
}
