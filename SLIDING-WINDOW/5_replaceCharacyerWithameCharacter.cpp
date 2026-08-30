class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> mp;

        int low = 0;
        int ans = 0;
        int maxFreq = 0;

        for (int high = 0; high < s.size(); high++) {
            mp[s[high]]++; // sbse phle qidow me element add krte jarehain eg:- [a], [a,b], [a,b,a]
            maxFreq = max(maxFreq, mp[s[high]]); /* ab yaha pe max frequency ko nikalte jayenge eg [a:2,b:1] maxfreq=2;*/ 
            while ((high - low + 1) - maxFreq > k) { /* ab jab tak window ka size-max freq k se chota hai to window valid hai nahi to bada hone window shrink krenge */
                mp[s[low]]--;
                low++;
            }
            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};