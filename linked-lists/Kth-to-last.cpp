ListNode* return_kth_to_last(ListNode* head, int k) {
    if (!head) {
        return head;
    }
    int count = 0;
    ListNode* tmp = head;
    while (tmp) {
        tmp = tmp->m_next;
        ++count;
    }
    tmp = head;
    count = count - k;
    while (count) {
        tmp = tmp->m_next;
        --count;
    }
    return tmp;
}