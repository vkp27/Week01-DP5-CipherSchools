#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {
    
    if(head==NULL){
        return NULL;
    }
    Node *curr = head;
    Node *temp;
    while(curr){
        temp = curr->next;
        curr->next = new Node(curr->val);
        curr->next->next = temp;
        curr = temp;
    }
    curr = head;
    while(curr){
        curr->next->random = curr->random ? curr->random->next : curr->random;
        curr = curr->next->next;
    }
    
    Node *original = head;
    Node *copy = head->next;
    temp = copy;
    while(original && copy){
        original->next = original->next->next;
        copy->next = copy->next ? copy->next->next : NULL;
        original = original->next;
        copy = copy->next;
    }
    return temp;
}

int main(){
    return 0;
}