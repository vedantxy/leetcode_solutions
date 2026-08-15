class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
        int mini = nums[0];
        int maxi = nums[0];

        for (int x : nums) {
            mini = min(mini, x);
            maxi = max(maxi, x);
        }

        return max(0, (maxi - mini) - 2 * k);
    }
};