//https://leetcode.com/problems/combination-sum-ii/description/
class Solution {
public:
    void f(int i, int sum, int target, vector<int> &candidates, vector<int> &a, vector<vector<int>> &ans)
    {
        if(sum==target)
        {
            ans.push_back(a);
            return;
        }
        if(sum>target || i==candidates.size())
            return;

        a.push_back(candidates[i]);
        sum += candidates[i];
        f(i+1, sum, target, candidates, a, ans);

        a.pop_back();
        sum -= candidates[i];
        int indx = i+1;
        while(indx<candidates.size() && candidates[i]==candidates[indx])
            indx++;
        f(indx, sum, target, candidates, a, ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> a;
        
        f(0, 0, target, candidates, a, ans);

        return ans;
    }
};
