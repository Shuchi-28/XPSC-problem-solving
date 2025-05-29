//https://leetcode.com/problems/combination-sum/description/
class Solution {
public:
    void f(int i, int sum, int target, vector<int> &candidates, vector<int> &a, vector<vector<int>> &ans)
    {
        if(sum>target || i==candidates.size())
            return;
        if(sum==target)
        {
            ans.push_back(a);
            return;
        }

        a.push_back(candidates[i]);
        sum += candidates[i];
        f(i, sum, target, candidates, a, ans);

        a.pop_back();
        sum -= candidates[i];
        f(i+1, sum, target, candidates, a, ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> a;
        
        f(0, 0, target, candidates, a, ans);

        return ans;
    }
};
