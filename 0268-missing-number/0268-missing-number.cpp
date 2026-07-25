class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int esum = 0;
        int asum =0;
        int n = nums.size();

        for(int i=0;i <= n;i++){
          esum += i;
        }

        for(int i=0;i<nums.size();i++){
            asum += nums[i];
        }

        int miss = esum - asum;

        return miss;
    }
};