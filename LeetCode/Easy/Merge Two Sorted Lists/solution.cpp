/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        multiset<int> s;
        while (list1) {
            s.insert(list1->val);
            list1 = list1->next;
        }
        while (list2) {
            s.insert(list2->val);
            list2 = list2->next;
        }
        ListNode head(0);
        ListNode* curr = &head;

        for (auto value : s) {
            curr->next = new ListNode(value);
            curr = curr->next;
        }

        cout << s.size();
        return head.next;
    }
};