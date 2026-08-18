#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {-4,-1,0,3,10};
     int size = nums.size();
        vector<int> neg;
        vector<int> pos;
// 1) divide the aray in 2 parts negetive and positive
        for (int i = 0; i < size; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }

        // 1ST CASE IF THERS ONLY POSITIVE ELEMENTS THEN SIMPLY RETURN THE SQUARE OF THR ARRAY
        if (neg.size() == 0) { // no negetive elements in theeeeeeeee array
            for (int i = 0; i < pos.size(); i++){
                pos[i] = pos[i] * pos[i];
                
            }
              for(int val : pos){
                cout<<val<<" ";
              }
                
        }
        


        // 2ND CASE F THERS ONLY NEGETIVE ELEMENTS THEN FIRST SQAURE THE ARRAY AND REVERSE THE ARRAY AND RETURN THE  ARRAY
        if (pos.size() == 0) { // no positive el. so first square and and then
                               // reverse the aray

            for (int i = 0; i < neg.size(); i++){
                neg[i] = neg[i] * neg[i];
            }

           reverse(neg.begin(), neg.end());
           for(int val : neg){
                cout<<val<<" ";
              }
        }
        

        // 3RD CASE IF NEGETIVE AND POSITIVE ARE MIXED HAHAHAHAHAHA

        // NOW WE WILL US THE LOGIC OF MERGING TWO SORTED ARRAY
        int i = 0; // pointer number 1
        int j = 0; // pointer number do
        int idx = 0; //INDEX FO NEW ARRAY
        int n = neg.size();
        int p = pos.size();
        vector<int> res(n + p);

        // -VE ARRAY KO SQUARE KRKE REVERSE KRLIYA TAKI SORT HOJAYE
        for (int i = 0; i < n; i++) {
            neg[i] = neg[i] * neg[i];
        } 
        reverse(neg.begin(), neg.end());
        
        // +VE ARRAY KO SIMPLY SQUARE KRDIYA 
        for (int i = 0; i < p; i++) {
            pos[i] = pos[i] * pos[i];
        }

        /* 2PTR KA USE KRKE EK PTR NEGETIVE PE I  AUR J PTR POSTIVE ARRAY PE 
        AB JB DONO PTR ARR K AND HO TB
        AGAR NEGTIVE KA EL POSTIVE K EL SE COTA HUA TO RES[0] ME NEG KA EL JAYEGA NAHI TO POS KA
        FIR RES. K INDX KO AGE KRDENGE [1] PE AUR ISIS TRHA ITERATION KRENGE */
        while (i < n && j < p) {
            if (neg[i] < pos[j]) {
                res[idx] = neg[i];
                idx++;
                i++;
            } else {
                res[idx] = pos[j];
                idx++;
                j++;
            }
        }

/* AB JAISE NEG ARR ME HI BS JGHA KHAL HAI AUR POS FULL HAI TO  JAB TK NEG ARRAY COMPLETE NA HOJAYE ISME REST ELEMNTS FILL KRTE RHENGE  */
        while (i < n) {
            res[idx] = neg[i];
            idx++;
            i++;
        }
/* AB JAISE POS ARR ME HI BS JGHA KHAL HAI AUR NEG FULL HAI TO  JAB TK POS. ARRAY COMPLETE NA HOJAYE ISME REST ELEMNTS FILL KRTE RHENGE  */
        while (j < p) {
            res[idx] = pos[j];
            idx++;
            j++;
        }

        for (int val : res){
            cout<< val<< " ";
        }
    }