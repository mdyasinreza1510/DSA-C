class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i]; /*sbse pehle to 0 se leke window ka jo bhi size hai jaise 4 to 0-3 tk k sum ko add krlieye*/
        }
        int maxSum = sum; //aur uss sum ko abhi kliye max sum bana diye ;
        for (int high = k; high < nums.size(); high++) {/* ab w.s increae krnge high ko k se start liye q ki
            1st loop me windo 3 p khtm hua tha isiliye ab nest elemnt ko ad krte hue high ko k se start krenge yani idx-4 se*/
            sum = sum - nums[high - k]; /* ab naa elemnt add krne k baad sbse phla elemnt hattenge window se abhi kreliye [4-4]=0 ->nums[0]
            is trha se phle elemt htt gya */
            sum = sum + nums[high]; /* ab jo naya element aya usko add krelnege */
            maxSum = max(maxSum, sum); // aur yaha pe max sum ko update krelnege 
        }
        return (double)maxSum / k; // aurr yaha se avg nikaaal lenege
    }
};