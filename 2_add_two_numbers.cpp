#include <iostream>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode head = ListNode(0);
        ListNode *curr = &head;
        ListNode *list1, *list2;

        list1 = l1;
        list2 = l2;
        int carry = 0;
        while (list1 != nullptr || list2 != nullptr)
        {
            int x = (list1 != nullptr) ? list1->val : 0;
            int y = (list2 != nullptr) ? list2->val : 0;

            int sum = x + y  + carry;
            carry = sum / 10;

            curr->next = new ListNode(sum % 10);;
            curr = curr->next;

            // Next Linked list items
            if (list1 != nullptr)
                list1 = list1->next;

            if (list2 != nullptr)
                list2 = list2->next;

        }
        if (carry > 0)
            curr->next = new ListNode(carry);

        return head.next;
    }
};


int main()
{
    ListNode l1_0 = ListNode(4);
    ListNode l1_1 = ListNode(3, &l1_0);
    ListNode l1_2 = ListNode(4, &l1_1);
    ListNode l1_3 = ListNode(2, &l1_2);

    ListNode l2_0 = ListNode(4);
    ListNode l2_1 = ListNode(6, &l2_0);
    ListNode l2_2 = ListNode(5, &l2_1);

    Solution solve;
    ListNode *ans = solve.addTwoNumbers(&l1_3, &l2_2);

    return 0;
}

