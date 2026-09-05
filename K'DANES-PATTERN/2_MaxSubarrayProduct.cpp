class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minend=nums[0];
        int maxend=nums[0];
        int ans=nums[0];
        for(int i =1 ; i<nums.size(); i++){
            int ch1= nums[i];
            int ch2=minend*nums[i];
            int ch3=maxend*nums[i];

            maxend=max(ch1,max(ch2,ch3));
            minend=min(ch1,min(ch2,ch3));
            ans =max(ans,max(maxend,minend));
        }
        return ans;
        
    }
};