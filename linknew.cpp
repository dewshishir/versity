#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        this->data=val;
        this->next=nullptr;

    }
};



int main()
{
    Node *a=new Node(4);
    cout<<a->data<<" "<<a->next<<endl;
    Node *b=new Node(5);
    cout<<b->data<<" "<<b->next<<endl;
    a->next=b;
    Node *c=new Node(6);
    cout<<c->data<<" "<<c->next<<endl;
    b->next=c;
    Node *d=new Node(7);
    c->next=d;
    cout<<d->data<<" "<<d->next<<endl;
}
