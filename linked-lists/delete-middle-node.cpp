void delete_middle(ListNode* head) {
    if (!head || !head->m_next) {
        delete head;
        head = nullptr;
        return;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = head;
    while (fast && fast->m_next) {
        prev = slow;
        slow = slow->m_next;
        fast = fast->m_next->m_next;
    }
    prev->m_next = slow->m_next;
    delete slow;
    slow = nullptr;
}