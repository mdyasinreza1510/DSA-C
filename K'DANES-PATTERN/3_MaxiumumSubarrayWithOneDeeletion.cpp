class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int no_dlt=arr[0];
        int one_dlt=arr[0];
        int ans =arr[0];
        for(int i=1;i<arr.size();i++){
            int prev=no_dlt;
            one_dlt=max(one_dlt+arr[i],prev);
            int ch1=arr[i];
            int ch2=prev+arr[i];
            no_dlt=max(ch1,ch2);
            ans=max(ans,max(one_dlt,no_dlt));
        }
        return ans;
    }
};