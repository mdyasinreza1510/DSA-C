#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int main(){
 vector<int> nums={1,1,1,2,2,3};

 int cm=1;
 int off=0;
 int res =1;

 while (cm<nums.size()){
    if(nums[cm]== nums[cm-1]){
        cm++;
    }
    else{
        nums[off+1]=nums[cm];
        off++;
        cm++;
        res++;
    }
    return res;
 }

    cout<<"result : "<<res;
    
    
    return 0;

}