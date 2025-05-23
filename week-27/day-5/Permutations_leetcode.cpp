// https://leetcode.com/problems/permutations/description/
class Solution {
public:
    void f(vector<int> &nums, vector<int> &a, vector<vector<int>> &ans, vector<int> &freq)
    {
        if(nums.size()==a.size())
        {
            ans.push_back(a);
            return;
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(freq[i]==0)
            {
                a.push_back(nums[i]);
                freq[i] = 1;
                f(nums, a, ans, freq);
                freq[i] = 0;
                a.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a, freq(nums.size(), 0);

        f(nums, a, ans, freq);
        return ans;
    }
};
