class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int i=0;
        ListNode *tmp = head;
        while(tmp != NULL){
            i++;
            tmp = tmp-> next;
        }
        i = i/2;
        tmp = head;
        for(int j=0; j<i; j++){
            tmp = tmp->next;
        }
        return tmp;
    }
};