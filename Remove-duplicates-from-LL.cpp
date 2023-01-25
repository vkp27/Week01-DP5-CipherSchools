#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL){
        return head;
    }
    ListNode *curr = head;
    ListNode *prev = head;
    ListNode * temp = head;
    while(curr!=NULL){
        if(curr->val != prev->val){
            prev->next = curr;
            prev = curr;
        }
        
        curr = curr->next;
    }
    prev->next = NULL;
    return temp;
}

int main(){
    return 0;
}