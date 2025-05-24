//https://leetcode.com/problems/palindrome-partitioning/description/

class Solution {
public:
    bool is_palindrome(int i, int j, string &s)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    void f(int indx, string &s, vector<string> &a, vector<vector<string>> &ans, int n)
    {
        if(indx == n)
        {
            ans.push_back(a);
            return;
        }

        for(int i=indx; i<n; i++)
        {
            if(is_palindrome(indx, i, s))
            {
                a.push_back(s.substr(indx, i-indx+1));
                f(i+1, s, a, ans, n);
                a.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> a;
        int n = s.size();
        f(0, s, a, ans, n);
        return ans;
    }
};
