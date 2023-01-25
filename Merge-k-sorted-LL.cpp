#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

ListNode *merge(ListNode *x, ListNode *y){
        ListNode *res = NULL;
        if(x==NULL){
            return y;
        }
        if(y==NULL){
            return x;
        }
        if(x->val<=y->val){
            res = x;
            x->next = merge(x->next, y);
        }
        else{
            res = y;
            y->next = merge(x, y->next);
        }
        
        return res;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        //int sz = lists[0].size();
        if(k==0){
            return NULL;
        }
        int i=0;
        int last = k-1;
        int j;
        while(last!=0){
            i = 0;
            j = last;
            while(i<j){
                lists[i] = merge(lists[i],lists[j]);
                i++;
                j--;
                if(i>=j){
                    last = j;
                }
            }
        }
        return lists[0];
    }
int main(){
    return 0;
}