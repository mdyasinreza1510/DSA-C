class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        int n= arr.size();
        int count =0;
        
        sort(arr.begin(),arr.end());
        for (int i =0; i<n-2 ; i++){
            int left = i+1;
            int right= n-1;
          while(left<right){
              int s=arr[i]+arr[left]+arr[right];
              if(s>=sum){
                  right--;
                  
              } else{
                 count=count+(right-left);
                 left++;
              }
          }
        }
        return count;
    }
};