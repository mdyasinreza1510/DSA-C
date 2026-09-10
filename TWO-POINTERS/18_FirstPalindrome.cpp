class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int low =0;
            int high= words[i].size()-1;
            bool palindrome=true;
            while(low<high){
                if(words[i][low] != words[i][high]){
                    palindrome=false;
                    break;
                }
                low++;
                high--;
            }
            if(palindrome){
                return words[i];
            }
        }
        return "";
        
    }
};