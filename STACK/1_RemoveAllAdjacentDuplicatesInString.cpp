//1047
class Solution {
public:
    string removeDuplicates(string s) {
           string str;
    for(char c:s){
        if(!str.empty() and c==str.back()){
            str.pop_back();
        } 
        else 
           str.push_back(c);
    }
    return str;
        
    }
};