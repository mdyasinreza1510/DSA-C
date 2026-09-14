class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() <= 2) {
            return nums.size();
        }

        int low = 2;
        int high = 2;

        while (high < nums.size()) {

            if (nums[high] != nums[low - 2]) {

                nums[low] = nums[high];
                low++;
            }

            high++;
        }

        return low;
    }
};