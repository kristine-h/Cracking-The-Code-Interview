bool is_palindrome(ListNode* head) {
    if (!head || !head->m_next) {
        return true;
    }
    std::stack<int> elems;
    ListNode* tmp = head;
    while (tmp) {
        elems.push(tmp->m_data);
        tmp = tmp->m_next;
    }
    while (head) {
        if (head->m_data != elems.top()) {
            return false;
        }
        elems.pop();
        head = head->m_next;
    }
    return true;
}