class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size(),low=0,high=n-1;
        while(low<high){
            if(nums[low]%2==0 && nums[high]%2 !=0){
                low++;
                high--;
            }
            else if(nums[low]%2==0){
                low++;
            }
            else if(nums[high]%2 != 0){
                high--;
            }
             else{
                swap(nums[low],nums[high]);
                low++;
                high--;
            }
        }
        return nums;
    }
};