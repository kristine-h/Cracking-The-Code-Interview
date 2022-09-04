ListNode* partition(ListNode* head, int x) {
    ListNode* before = new ListNode();
    ListNode* after = new ListNode();
    ListNode* before_head = before;
    ListNode* after_head = after;
    while(head){
        if (head->val < x){
            before_head->m_next = head;
            before_head = before_head->m_next;
        }
        else { 
            after_head->m_next = head;
            after_head = after_head->m_next;
        }
        head = head->m_next;
    }
    before_head->m_next = after->m_next;
    after_head->m_next = nullptr;
    return before->m_next;
}