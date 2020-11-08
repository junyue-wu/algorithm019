/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); i++) {
            auto j = hashtable.find(target - nums[i]);
            if (j != hashtable.end()) {
                return {j->second, i};
            }
            hashtable.insert({nums[i], i});
        }
        return {};
    }
};

// @lc code=end

