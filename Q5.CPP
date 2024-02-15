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

int LengthOFCycle(ListNode* a){
    int i=1;
    int j=2;
    ListNode* slow = a;
    ListNode* fast = a;
    slow= slow->next;
    fast = fast->next->next;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next->next;
        i++;
        j+=2;
    }
    return j-i;
}

int main() {
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);
    ListNode* f = new ListNode(6);
    ListNode* g = new ListNode(7);
    ListNode* h = new ListNode(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = e;
    
    cout<<LengthOFCycle(a);
}