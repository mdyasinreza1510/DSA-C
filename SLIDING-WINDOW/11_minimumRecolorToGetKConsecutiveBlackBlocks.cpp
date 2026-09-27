//class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int white=0,ans=INT_MAX,low=0;
        for(int high=0;high<blocks.size();high++){
            if(blocks[high]=='W'){
                white++;
            }
            while((high-low+1)==k){
                ans=min(ans,white);
                if(blocks[low]=='W'){
                    white--;
                }
                low++;
            }
        }
        return ans;
        
    }
};