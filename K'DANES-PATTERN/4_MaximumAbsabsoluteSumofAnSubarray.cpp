class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int maxbe = nums[0];
        int minbe = nums[0];
        int maxans = nums[0];
        int minans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int ch1 = nums[i];
            int ch2 = maxbe + nums[i];
            maxbe = max(ch1, ch2);
            maxans = max(maxans, maxbe);
            
            ch1 = nums[i];
            ch2 = minbe + nums[i];
            minbe = min(ch1, ch2);
            minans = min(minans, minbe);
        }

        return max(abs(maxans), abs(minans));
    }
};