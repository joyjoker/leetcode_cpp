#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>
#include <string>
#include <queue>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <cstdlib>
#define ALL(x) ((x).begin()),((x).end())
#define RESET(a,b) memset(a,b, sizeof a)
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
#define LEN(X) strlen(X)
#define FI(a,b,c) for(int a=b; a<c; a++)
#define FD(a,b,c) for(int a=b; a>c; a--)
using namespace std;
typedef long long ll;
typedef long long LL;
typedef double db;
typedef double D;
typedef long double ld;
typedef long double LD;
/*********default*********/
static auto x = [](){
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    std::cin.tie(NULL);
    return 0;
}();
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {
	}
};
class InitList {
	public:
		ListNode* createList(vector<int> nums) {
			if(nums.size() == 0) {
				return NULL;
			}
			ListNode* head = new ListNode(nums[nums.size() - 1]);
			ListNode* currentNode = head;
			for(int i = nums.size() - 2; i >= 0; i--) {
				currentNode->next = new ListNode(nums[i]);
				currentNode = currentNode->next;
			} 
			return head;
		}
}; 
class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		    ListNode* head = new ListNode(0);
		    ListNode* currentNode = head;
		    int carry = 0;
		    while(l1 != NULL || l2 != NULL || carry != 0) {
		    	int x = (l1 != NULL) ? l1->val : 0;
		    	int y = (l2 != NULL) ? l2->val : 0; 
		    	int sum = carry + x + y;
		    	carry = sum / 10;
		    	currentNode->next = new ListNode(sum % 10);
		    	currentNode = currentNode->next;
		    	if(l1 != NULL) {
		    		l1 = l1->next; 
				}
				if(l2 != NULL) {
		    		l2 = l2->next; 
				}
			}
			return head->next;
		}
};


int main() {
	vector<int> nums1 = {5};
	vector<int> nums2 = {5};
	InitList I;
	ListNode* l1 = I.createList(nums1);
	ListNode* l2 = I.createList(nums2);
	Solution s;
	ListNode* head = s.addTwoNumbers(l1, l2);
	while(head) {
		cout << head->val << " ";
		head = head->next;
	}
	return 0;
}

