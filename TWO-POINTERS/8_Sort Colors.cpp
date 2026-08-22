class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int n=nums.size();
        int high=n-1;
        /* yaha pe low starting point hai aur high ending point aur mid wo point hai jo pura array 
        traverse krega aur compare krega ki wo element starting me jayega ya ending me  */
        while(mid<=high){
            if(nums[mid]==0){
                /* agar el = k equal hua to mid se swap krke start me daldenge aur dono pointer ++krdenge */
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            } else{
                /** yaha sirf h-- krenge kyu ki 2 se swap hone k bad swaped number xero bhi hoskta hai isiliye mid ko ++ nahi krnge  */
                swap(nums[mid],nums[high]);
                high--;
            }

        }
        
    }
};