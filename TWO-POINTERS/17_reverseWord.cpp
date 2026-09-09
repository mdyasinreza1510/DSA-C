class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;

        while (i < n) {
            int low = i;
            while (i < n && s[i] != ' ') {
                i++;
            }
            int high = i - 1;

            while (low < high) {
                swap(s[low], s[high]);
                low++;
                high--;
            }
            i++;
        }

        return s;
    }
};