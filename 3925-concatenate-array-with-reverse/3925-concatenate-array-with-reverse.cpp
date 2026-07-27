class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {

        vector<int> ans;

        // Original array
        for (int num : nums) {
            ans.push_back(num);
        }

        // Reverse array
        for (int i = nums.size() - 1; i >= 0; i--) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};