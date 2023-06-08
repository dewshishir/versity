#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        this->data =val;
        this -> next = nullptr;
    }

};

void display(Node* head){
    Node* tmp = head;
    if(tmp==nullptr)return;
        cout << tmp->data << " " ;
        display(tmp->next);

}

int main()
{
    Node* a = new Node(5);
    cout << a->data << " " << a->next << endl;
    Node* b = new Node(6);
    a->next = b;
    Node* c = new Node(7);
    b->next = c;
    Node* d = new Node(8);
    c->next = d;
    Node* e = new Node(9);
    d->next = e;

    display(a);

}
