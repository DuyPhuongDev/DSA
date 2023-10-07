#include<iostream>
#include<map>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /*  Using map
    bool hasCycle(ListNode *head) {
        if(head ==  nullptr || head->next == nullptr) return false;
        map<ListNode*,bool> visited;
        ListNode* cur = head;
        while(cur!=nullptr){
            if(visited[cur]==true) return true;
            visited[cur]=true;
            cur = cur->next;
        }
        return false;
    }   */
    /* Floy's Cycle Algorithms */
    bool hasCycle(ListNode* head){
        if(head ==  nullptr || head->next == nullptr) return false;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=nullptr && slow != nullptr){
            fast = fast->next;
            if(fast == nullptr) return 0;
            fast = fast->next;
            slow= slow->next;
            if(fast == slow) return 1;
        }
        return false;
    }
};