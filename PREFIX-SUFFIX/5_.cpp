class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // for loop
        // for(int i=1;i<nums.size();i++){
        //     nums[i]=nums[i]+nums[i-1];
        // }

        //while loop
        int i=1;
        while(i<nums.size()){
            nums[i]=nums[i]+nums[i-1];
            i++;
        }
        return nums;
    }
};
