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
ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* curr = temp;
        while(curr->next!=NULL){
            if(curr->next->val == val){
                curr->next = curr->next->next;  
            }
            else curr = curr->next;
            
        }
        return temp->next;
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
    ListNode* c = new ListNode(6);
    ListNode* d = new ListNode(3);
    ListNode* e = new ListNode(4);
    ListNode* f = new ListNode(5);
    ListNode* g = new ListNode(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    removeElements(a,6);
    display(a);


}