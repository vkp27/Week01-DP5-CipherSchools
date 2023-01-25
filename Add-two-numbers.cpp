#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    int carry = 0;
    int sum = 0;
    ListNode *dummy = new ListNode(0);
    ListNode *temp = dummy;
    ListNode *curr1 = l1;
    ListNode *curr2 = l2;

    while(curr1!=NULL && curr2!=NULL){
        sum = curr1->val + curr2->val + carry;
        
        carry = sum/10;
        temp->next = new ListNode(sum%10);
        temp = temp->next;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    while(curr1!=NULL){
        sum = curr1->val + carry;
        carry = sum/10;
        temp->next = new ListNode(sum%10);
        temp = temp->next;
        curr1 = curr1->next;
    }
    while(curr2!=NULL){
        sum = curr2->val + carry;
        carry = sum/10;
        temp->next = new ListNode(sum%10);
        temp = temp->next;
        curr2 = curr2->next;
    }
    if(carry > 0){
        temp->next = new ListNode(carry);
    }
    return dummy->next;
}

int main(){
    return 0;
}