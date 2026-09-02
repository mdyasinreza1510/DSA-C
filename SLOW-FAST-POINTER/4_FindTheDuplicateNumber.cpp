// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {

//         // Phase 1 : Cycle detect
//         int slow = nums[0];
//         int fast = nums[0];

//         do {
//             slow = nums[slow];              // 1 step
//             fast = nums[nums[fast]];        // 2 steps
//         } while (slow != fast);

//         // Phase 2 : Find cycle starting point
//         slow = nums[0];

//         while (slow != fast) {
//             slow = nums[slow];
//             fast = nums[fast];
//         }

//         return slow;
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];
        while (true) {

            slow = nums[slow]; 

            fast = nums[nums[fast]];   

            if (slow == fast) {
                break;
            }
        }


        slow = nums[0];

        while (slow != fast) {

            slow = nums[slow];         

            fast = nums[fast];
        }

        return slow;
    }
};