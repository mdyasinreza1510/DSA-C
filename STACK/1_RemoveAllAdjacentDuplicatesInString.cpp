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




//my method
class Solution {
public:
    string removeDuplicates(string s) {
 stack<char>st;
 string res;
 for(int i=0;i<s.size();i++){
    if(st.empty()){
        st.push(s[i]);
        continue;
    }
    if (st.top() == s[i]){
        st.pop();
        continue;
    }else{
        st.push(s[i]); 
    }
   
 }
 while(!st.empty()){
    res.push_back(st.top());
    st.pop();
 }

 reverse (res.begin(),res.end());
 return res;
        
    }
};