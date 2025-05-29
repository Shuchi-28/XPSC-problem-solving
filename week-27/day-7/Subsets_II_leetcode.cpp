//https://leetcode.com/problems/subsets-ii/description/
class Solution {
public:
    void f(int i, vector<int> &nums, vector<int> &a, vector<vector<int>> &ans, int n)
    {
        if(i==n)
        {
            ans.push_back(a);
            return;
        }

        a.push_back(nums[i]);
        f(i+1, nums, a, ans, n);
        a.pop_back();

        int indx = i+1;
        while(indx<n && nums[i]==nums[indx])
            indx++;
        f(indx, nums, a, ans, n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans; 
        int n = nums.size();
        vector<int> a;
        
        f(0, nums, a, ans, n);

        return ans;
    }
};
