class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merge(m+n);
        int i=0;
        int j=0;
        int idx=0;
        while (i<m  && j<n){
            if(nums1[i] < nums2[j]){
                merge[idx]=nums1[i];
                idx++;
                i++;
            } else{
                merge[idx]= nums2[j];
                idx++;
                j++;
            }
        }
        while(i<m){
        merge[idx]=nums1[i];
        idx++;
        i++;
        }
        

    
     while(j<n){
        merge[idx]=nums2[j];
        idx++;
        j++;
     }
      for(int k=0 ; k<m+n ; k++){
        nums1[k]=merge[k];
     }

    


        
    }
};