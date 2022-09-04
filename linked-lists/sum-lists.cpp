ListNode* add_lists(ListNode* head1, ListNode* head2) {
    ListNode* result = new ListNode();
    ListNode* result_head = result;
    ListNode* new_node;
    int carry = 0;
    int sum;
    while (head1 || head2 || carry) {
        sum = 0;
        if (head1) {
            sum += head1->m_data;
            head1 = head1->m_next;
        }
        if (head2) {
            sum += head2->m_data;
            head2 = head2->m_next;
        }
        sum += carry;
        carry = sum / 10;
        new_node = new ListNode(sum % 10);
        result_head->m_next = new_node;
        result_head = result_head->m_next;
    }
    return result->m_next;
} 