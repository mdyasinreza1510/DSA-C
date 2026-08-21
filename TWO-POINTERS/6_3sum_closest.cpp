#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    // Input Array
    vector<int> nums = {-1, 2, 1, -4};

    // Target
    int target = 1;

    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    int n = nums.size();

    // Minimum difference
    int diff = INT_MAX;

    // Closest Sum
    int res_sum = 0;

    // Fix one element
    for (int i = 0; i < n - 2; i++) {

        int left = i + 1;
        int right = n - 1;

        while (left < right) {

            // Current Sum
            int total_sum = nums[i] + nums[left] + nums[right];

            // Difference from target
            int d = abs(target - total_sum);

            // Update closest answer
            if (d < diff) {
                diff = d;
                res_sum = total_sum;
            }

            // Exact answer found
            if (total_sum == target) {
                cout << "Closest Sum = " << res_sum << endl;
                return 0;
            }

            // Increase sum
            else if (total_sum < target) {
                left++;
            }

            // Decrease sum
            else {
                right--;
            }
        }
    }

    cout << "Closest Sum = " << res_sum << endl;

    return 0;
}