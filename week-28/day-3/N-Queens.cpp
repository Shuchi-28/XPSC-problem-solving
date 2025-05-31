//https://leetcode.com/problems/n-queens/description/
class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col, int n)
    {
        for(int i=0; i<n; i++)
        {
            if(board[i][col]=='Q')
                return false;
        }

        for(int j=0; j<n; j++)
        {
            if(board[row][j]=='Q')
                return false;
        }
        
        for(int i=row, j=col; i>=0 && j<n; i--,j++)
        {
            if(board[i][j]=='Q')
                return false;
        }

        for(int i=row, j=col; i>=0 && j>=0; i--,j--)
        {
            if(board[i][j]=='Q')
                return false;
        }

        return true;
    }
    void place(int row,  vector<string> &board, vector<vector<string>> &ans, int n)
    {
        if(row==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int j=0; j<n; j++)
        {
            if(isSafe(board, row, j, n))
            {
                board[row][j] = 'Q';
                place(row+1, board, ans, n);
                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));

        place(0, board, ans, n);

        return ans;
    }
};
