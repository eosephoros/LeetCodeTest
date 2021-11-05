#include<iostream>
using namespace std;
//Definition for singly - linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* l3 = new ListNode;
		int flag = 0;
		while (l1 || l2) {
			l3->val = (l1->val + l2->val+1) ;
			if (flag == 1) l3->val++;
			if (l3->val > 9) { 
				l3->val = l3->val % 10;
				flag = 1;
			}
			else
				flag = 0;
			/*
			if (l1->next)
				l1 = l1->next;
			else if (l2->next&&!l1->next)
				l2 = l2->next;
				l1->next->val=0
			else if (l2->next)
				*/
		}
		return l3;
	}
};

int main() {
	Solution* solution1 = new Solution;
	ListNode* l1 = new ListNode;
	l1->val = 1;
	l1->next = new ListNode;
	l1->next->val = 2;
	l1->next->next = new ListNode;
	l1->next->next->val = 3;
	ListNode* l2 = new ListNode;
	l2->val = 3;
	l2->next = new ListNode;
	l2->next->val = 4;
	l2->next->next = new ListNode;
	l2->next->next->val = 5;
	ListNode* l3 = new ListNode;
	l3 = solution1->addTwoNumbers(l1, l2);
	cout << l3->val<<l3->next->val<<l3->next->next->val;

}