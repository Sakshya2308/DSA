// 2 approaches
// recursive
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        else if(list2 == NULL){
            return list1;
        }
        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else{
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }

// iterative
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        else if(list2 == NULL){
            return list1;
        }
        ListNode *ptr1 = list1;
        if(list1->val < list2->val){
            list1 = list1->next;
        }
        else{
            ptr1 = list2;
            list2 = list2->next;
        }
        ListNode *ptr2 = ptr1;
        while(list1 && list2){
            if(list1->val < list2->val){
                ptr2->next = list1;
                list1 = list1->next;
            }
            else{
                ptr2->next = list2;
                list2 = list2->next;
            }
            ptr2 = ptr2->next;
        }
        if(!list1){
            ptr2->next = list2;
        }
        else{
            ptr2->next = list1;
        }
        return ptr1;
    }
