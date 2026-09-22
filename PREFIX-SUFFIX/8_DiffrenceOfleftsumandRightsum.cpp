//2574
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int leftsum=0;
        int totalsum=0;

        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        
        for(int i =0;i<nums.size();i++){
            int rightsum= totalsum-nums[i]-leftsum;
            int diff=abs(rightsum-leftsum);
            leftsum += nums[i];
            ans.push_back(diff);
        }
        return ans;
    }
};