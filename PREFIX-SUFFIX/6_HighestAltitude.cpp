class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prefix = 0;
        
        int ans = 0;
        for (int i = 0; i < gain.size(); i++) {
            prefix += gain[i];
            ans = max(ans, prefix);
        }
        return ans;
    }
};