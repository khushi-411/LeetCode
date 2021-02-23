/* Given head, the head of a linked list, determine if the linked list has a cycle in it.*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        if(head == NULL)
            return false;
        if(head -> next == NULL)
            return false;
        while(slow && fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};
