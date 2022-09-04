void remove_dups(ListNode* head) {
    std::unordered_map<int, int> seen;
    ListNode* prev = head;
    ListNode* dup = head;
    while (head) {
        if (seen[head->m_data]) {
            prev->m_next = head->m_next;
            head = head->m_next;
            delete dup;
        } else {
            ++seen[head->m_data];
            prev = head;
            head = head->m_next;
        }
        dup = head;
    }
}