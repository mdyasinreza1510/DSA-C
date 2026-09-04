class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //using kdanes algorithm
        int be=nums[0];
        int ans =nums[0];
        for(int i=1;i<nums.size();i++){
            int ch1=be+nums[i];
            int ch2=nums[i];
            be=max(ch1,ch2);
            ans=max(ans,be);
        }
        return ans;
    }
};