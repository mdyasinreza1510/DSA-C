//1991
#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left=0;
        int sum=0;
        for (int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        for(int i=0; i<nums.size();i++){
            int right= sum-nums[i]-left;
            if (left == right){
                return i;
            }
            left +=nums[i];
        }
        return -1;
        
    }
};
