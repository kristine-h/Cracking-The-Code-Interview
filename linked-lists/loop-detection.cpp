 ListNode* detect_cycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* cycle_start = head;
        while (fast && fast -> m_next) {
            slow = slow -> m_next;
            fast = fast -> m_next -> m_next;
            if (slow == fast) {
                while (cycle_start != slow) {
                    slow = slow -> m_next;
                    cycle_start = cycle_start -> m_next;
                }
                return cycle_start;
            }
        }
    return nullptr;
}