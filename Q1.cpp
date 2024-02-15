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
ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL && fast->next->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

        }
        if(slow==head && slow->next == NULL) return NULL;
        slow->next = slow->next->next;
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
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    deleteMiddle(a);
    display(a);


}