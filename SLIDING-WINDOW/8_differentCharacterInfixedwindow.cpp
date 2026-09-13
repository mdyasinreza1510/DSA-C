
//1876

class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char, int> mp;
        int low = 0, high = 0, ans = 0;
        while (high < s.size()) {
            mp[s[high]]++;
            if (high - low + 1 == 3) {
                if (mp.size() == 3) {
                    ans++;
                }
                mp[s[low]]--;

                if (mp[s[low]] == 0) {
                    mp.erase(s[low]);
                }
                low++;
            }
            high++;
        }
        return ans;
    }
};