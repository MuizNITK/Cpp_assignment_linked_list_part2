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
ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ini = list1;
        ListNode* fin = list1;

       for(int i=0;i<a-1;i++){      // a=2     0
            ini = ini->next;
            fin = fin->next;
        }
        for(int i=a-1; i<b;i++){        // b=5  1 2 3 4   
            fin=fin->next;
        }
        ini->next = list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        list2->next = fin->next;
        return list1;
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
    ListNode* a = new ListNode(0);
    ListNode* b = new ListNode(1);
    ListNode* c = new ListNode(2);
    ListNode* d = new ListNode(3);
    ListNode* e = new ListNode(4);
    ListNode* f = new ListNode(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    ListNode* A = new ListNode(1000);
    ListNode* B = new ListNode(1001);
    ListNode* C = new ListNode(1002);
    A->next = B;
    B->next = C;
    display(a);
    display(A);
    mergeInBetween(a,3,4,A);
    display(a);
    
}