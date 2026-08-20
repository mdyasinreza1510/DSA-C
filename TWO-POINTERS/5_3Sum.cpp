#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums = {-1,0,1,2,-1,-4};

            vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;
            int sum = -nums[i];

            while (left < right) {

                int s = nums[left] + nums[right];

                if (s == sum) {

                    res.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }

                } 
                else if (s < sum) {
                    left++;
                }
                else {
                    right--;
                }


            } 

        } 

        for (auto triplet : res) {
        for (int val : triplet) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
    }


