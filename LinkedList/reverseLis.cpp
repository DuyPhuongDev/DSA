#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head;
        ListNode* pre = head;
        ListNode* fw = nullptr;
        while(pre!=nullptr){
             cur = cur->next;
             pre->next = fw;
             fw = pre;
             pre = cur;
        }
        return fw;
    }
};
int main(){
    
}