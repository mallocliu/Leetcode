/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int cnt = 0;
		ListNode* res = new ListNode(0);
		ListNode* prev = res;
		while (1) {
			int data1 = 0, data2 = 0 , flag = 0;
			if (l1 != NULL) {
				data1 = l1->val;
				l1 = l1->next;
				flag = 1;
			}
			if (l2 != NULL) {
				data2 = l2->val;
				l2 = l2->next;
				flag = 1;
			}
			if (flag || cnt) {
				prev->next = new ListNode((data1 + data2 + cnt) % 10);
				prev = prev->next;
				cnt = (data1 + data2 + cnt) / 10;
			}
			else {
				return res->next;
			}
		}
	}
};