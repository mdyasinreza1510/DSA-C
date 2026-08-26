class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int high=0;
    int low =0;
    int ans = INT_MAX;
    int sum =0;

    // target = 7, nums = [2,3,1,2,4,3]

    // sbse pjle pura array ko traverse krenege aur hr element ka sum niklate jayenge 
    while (high <nums.size()){
        sum += nums[hiugh] //2+3+1+2 .......


        // ab jaise hi sum target k >= hoga hme ans milgy hai hme bs window ka size nikalna hai aur minimum size ka window return krna hai 
        if (sum >=target){
            int windowsize = high-low+1;
            ans = min( ans,windowsize);//ans aur ws me compare krega minimum konsa hai 

            //ab winodow se phla el hata te jayenge aur dekhnge ki target se >= hai ya nahi
            sum = sum - nums[low];
            low++; // window ko chota krdiye taki min size of window mile 

            //agar target k >= hua to ye loop fir chlega nahi to loop se bahar jayewga aur high++ hojayga 
        }
        high ++;
        // kui ki sum < hone pe loop se bahar aya isiliye wndow ka size increase krdiye taki naya el miljaye
        }
        if (ans == INT_MAX)
            return 0;
        return ans;
    }
};