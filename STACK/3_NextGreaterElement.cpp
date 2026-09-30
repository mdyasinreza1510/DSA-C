
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

// Ye Monotonic Stack (Decreasing Stack) ka question hai.
// Stack me elements nahi, indices store karenge.

// Answer array ko pehle -1 se fill kar denge.

// ans = [-1,-1,-1,...]

// Kyunki array circular hai, isliye hum array ko 2 baar traverse karenge.

// for(i = 2*n-1 → 0)

// Actual index nikalne ke liye

// idx = i % n
// Stack me sirf wahi indices rahenge jinke elements current element se bade hain.

// Isliye jab tak

// nums[st.top()] <= nums[idx]

// tab tak stack se pop karte rahenge.

// Agar stack empty nahi hua,

// ans[idx] = nums[st.top()]

// kyunki stack ka top hi next greater element hai.

// Ab current index ko stack me push kar denge.

// st.push(idx)
// Reverse traversal isliye karte hain taaki current element ke right side ki information pehle se stack me available ho