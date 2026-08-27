class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0,high=0,ans=INT_MIN;
        unordered_map<int, int> mp; //sbse pehle ek map banaye jis me array ko trvaerse krte hue sare fruits ko add krenge 

        for(high=0;high<fruits.size();high++){
            mp[fruits[high]]++;//sare fruits koo add krre hain eg:-[1,2,3]
            while(mp.size() >2 ){//ye  check krega ki window me kitne distinct fruits hain mtlb kitne type k 
                //to q k according agr disticnt element 2 se zyada hai to 
                mp[fruits[low]]--; //low me jo fruit hsi usko km krdege [1,2,3] -> [0,2,3]
                if(mp[fruits[low]] == 0){ // aur agar us low ka frequency 0 hogya to usko array se nikal denge
                    mp.erase(fruits[low]);
                }
                low++;//window ka size increase krdenge
            }
            ans=max(ans,high-low+1); //aur har window k size ko max se compare krke max size ka window nikal lenge 
        }
        return ans;
    }
};