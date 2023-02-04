 ListNode* reverseList(ListNode* head) {
       ListNode *newHead = NULL;  //dummy variable
       while(head != NULL){
            ListNode *Next = head->next;
            head->next = newHead;
            newHead = head;
            head = Next;
       }
       return newHead;
    }
