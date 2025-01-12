ListNode* reverseList(ListNode* head) {
    
    

    stack<int> st;
    ListNode* temp = head;


    while (temp != NULL) {
        st.push(temp->val);
        temp = temp->next;
    }

   
    temp = head;
    while (temp != NULL) {
        temp->val = st.top(); 
        st.pop();            
        temp = temp->next;    
    }

    return head; 


    }
