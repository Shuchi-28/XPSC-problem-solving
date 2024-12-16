#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> v(n, vector<int>(n));

        int diff = n*n;
        int pos = false;
        string dir = "down";

        for (int col=0; col<n; col++)
        {
            if (dir == "down")
            {
                for (int row=0; row<n; row++)
                {
                    if(row==0)
                    {
                        if(col==0)  v[row][col] = 1;
                        else{
                            if (pos)
                                v[row][col] = v[row][col-1]+diff;
                            else
                                v[row][col] = v[row][col-1]-diff;
                            
                        }
                    }
                    else{
                        if (pos)
                            v[row][col] = v[row-1][col]+diff;
                        else
                            v[row][col] = v[row-1][col]-diff;
                            
                    }
                    pos = (!pos);
                    diff--;
                }
                dir = "up";
            }
            else{
                for (int row=n-1; row>=0; row--)
                {
                    if(row==n-1)
                    {
                        if(col==0)  v[row][col] = 1;
                        else{
                            if (pos)
                                v[row][col] = v[row][col-1]+diff;
                            else
                                v[row][col] = v[row][col-1]-diff;
                            
                        }
                    }
                    else{
                        if (pos)
                            v[row][col] = v[row+1][col]+diff;
                        else
                            v[row][col] = v[row+1][col]-diff;
                            
                    }
                    pos = (!pos);
                    diff--;
                }
                dir = "down";
            }
            
        }

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                cout << v[i][j] <<" ";
            }
            cout << '\n';
        }
    
    }


    return 0;
}
