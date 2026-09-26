//1343
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,low=0,count=0;

        
        for(int high=0;high<arr.size();high++){
            sum=sum+arr[high];
            if((high-low+1) == k){
                if(sum/k >= threshold){
                    count++;
                }
                sum = sum-arr[low];
                low++;
            }
        }
        return count;
        
    }
};