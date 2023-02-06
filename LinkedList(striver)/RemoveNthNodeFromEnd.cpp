ListNode* removeNthFromEnd(ListNode* head, int n) {
       if (head->next == NULL && n == 1)
            return NULL;
        ListNode *temp = head;
        int size = 0;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        if (size == n) return head->next;
        int cnt = size - n - 1;
        temp = head;
        while (cnt--) 
            temp = temp->next;
        temp->next = temp->next->next;
        return head;
    }
