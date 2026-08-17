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
    if(nums[cm]== nums[off]){
        cm++;
    }
    else{
        nums[off+1]=nums[cm];
        off++;
        cm++;
        res++;
    }

 }
 cout<<"total numbers of unique element is : "<<res;
return 0;


}