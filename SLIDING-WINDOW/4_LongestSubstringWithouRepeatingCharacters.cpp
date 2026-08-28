class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int low=0;
        int ans=0;
        for(int high=0;high<s.size();high++){ //yaha pe high pura array traverse krgeaaa
            mp[s[high]]++; // aur har eement ki frequency ko add krta rhega {a:1,b:1,c:1}
            while(mp[s[high]]>1){ //ab jaise hi jo current element hai uska frequecy 1 se zyada hoga to
                mp[s[low]]--;//uski frqu. ko kam krdega yani2 hai to 1
                low++; //aur low ko age badha k usko window se nikaal dega 
            }
            ans=max(ans,high-low+1);
        }
        return ans; 
        
    }
};