//1343
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,low=0,count=0;

        //sbse pehle ek loop chalaye o se end tk aur sum ko calculate krte rhe 
        for(int high=0;high<arr.size();high++){
            sum=sum+arr[high];
            //ab jaise hi window kazie k ke equal hua to hmne suym ka avg check kiya agr >= hai to count ++ hogya aur fir 
            if((high-low+1) == k){
                if(sum/k >= threshold){
                    count++;
                }
                //yaha se subarray ko choita krne keliye poohle 1st el ko sum se minus kiye rfir window size increase krke (low++) 1st subarray ka first el ko nikal diye 
                sum = sum-arr[low];
                low++;
            }
        }
        //ans return krdiyee
        return count;
        
    }
};