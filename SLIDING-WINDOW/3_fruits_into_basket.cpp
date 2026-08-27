class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0,high=0,ans=INT_MIN;
        unordered_map<int, int> mp;
        for(high=0;high<fruits.size();high++){
            mp[fruits[high]]++;
            while(mp.size() >2 ){
                mp[fruits[low]]--;
                if(mp[fruits[low]] == 0){
                    mp.erase(fruits[low]);
                }
                low++;
            }
            ans=max(ans,high-low+1);
        }
        return ans;
    }
};