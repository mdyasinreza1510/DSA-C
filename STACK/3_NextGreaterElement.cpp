class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        vector<int> res(nums.size(), -1);
        stack<int> st;

        int n = nums.size();

        for (int i = 2 * n - 1; i >= 0; i--) {

            int idx = i % n;

            while (!st.empty() && nums[st.top()] <= nums[idx]) {
                st.pop();
            }

            if (!st.empty()) {
                res[idx] = nums[st.top()];
            }

            st.push(idx);
        }

        return res;
    }
};

//lc 503 