#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int freq[26] = {0};
    for(char c: s)
    {
        freq[c-'a']++;
    }

    int flag = -1;
    for (int i=0; i<26; i++)
    {
        if (freq[i]==0)
        {
            flag = i;
            break;
        }
    }
    if (flag == -1)
    {
        cout << "None" <<'\n';
    }
    else{
        cout << char(flag+'a') <<'\n';
    }
    
    return 0;
}