 ListNode* is_there_an_intersection(ListNode* head1, ListNode* head2) {
        ListNode* tmp = head2;
        while (head1) {
            while (tmp) {
                if (tmp == head1) {
                    return head1;
                }
                tmp = tmp->next;
            }
            head1 = head1->next;
            tmp = head2;
        }
    return nullptr;
}