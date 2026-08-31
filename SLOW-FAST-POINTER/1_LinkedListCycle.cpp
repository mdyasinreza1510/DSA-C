class Solution {
public:
    bool hasCycle(ListNode *head) {//yaha head pointer diya gya hai 
        ListNode* slow = head; /* do pointer banaye ek slow aur ek fast aur dono pointer ko head me rkhe mtlb starting me  */
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) { /*jab tak fast null k equal nhi hai aur fast k baad bs ek hi node nahi hai tb tk 
            slow ko ek step aur fast ko do step badha te rhenge */
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) { //agar dono kbhi ksi point pe ek hi node pe agaye to mtlb waha cycle hai to true return krdenge
                return true;
            }
        }
        return false;
    }
};