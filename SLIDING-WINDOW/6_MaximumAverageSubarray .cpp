class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        int maxSum = sum;
        for (int high = k; high < nums.size(); high++) {
            sum = sum - nums[high - k];
            sum = sum + nums[high];
            maxSum = max(maxSum, sum);
        }
        return (double)maxSum / k;
    }
};