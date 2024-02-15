#include <iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        int len = 0;
        while(t1!=NULL){
            t1=t1->next;
            len++;           
        }
         if(len==1) return head;
        t1 = head;
        for(int i=0; i<k-1; i++){         // 0 
            t1 = t1->next;
        } 
        for(int i=0 ; i<len-k; i++){
            t2=t2->next;
        }           // 0 1 
       
        int a = t1->val;
        t1->val = t2->val;
        t2->val = a;
        return head;
}
void display(ListNode* head){
        ListNode* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
int main() {
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    swapNodes(a,2);
    display(a);


}