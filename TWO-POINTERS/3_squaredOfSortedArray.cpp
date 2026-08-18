#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> nums = { 0, 3, 10};
    int size = nums.size();
    vector<int> neg;
    vector<int> pos;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < 0)
        {
            neg.push_back(nums[i]);
        }
        else
        {
                pos.push_back(nums[i]);
        }
    }

    if (neg.size() == 0){ // no negetive elements in theeeeeeeee array
        for (int i = 0; i < pos.size(); i++){
            pos[i] = pos[i] * pos[i];
        }
    }
    for(int val : pos){
        cout<< val <<" ";
    }

    return 0;
}