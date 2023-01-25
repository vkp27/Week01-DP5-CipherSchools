#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* recur(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode* res = new ListNode();
        
        if(l1->val <= l2->val){
            res->val = l1->val;
            res->next = recur(l1->next, l2);
        }
        else{
            res->val = l2->val;
            res->next = recur(l1, l2->next);
        }
        
        return res;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return recur(list1,list2);
    }

    int main(){
        return 0;
    }