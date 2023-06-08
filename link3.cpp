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
void display(Node * head){
Node * tem =head;
if(tem==nullptr)return;
cout << tem->data << " ";
display(tem->next);
}
//normal way
//void display(Node * head){
//    Node* tem=head;
//    while(tem!=nullptr){
//    cout<<tem->data<<" ";
//tem=tem->next;
//    }
//
//}
int main(){
Node *a= new Node(7);

cout<<a->data<<" "<<a->next<<endl;
Node *b= new Node(6);
a->next=b;
Node *c= new Node(9);
b->next=c;
Node *d= new Node(2);
c->next=d;
Node *e= new Node(8);
d->next=e;
display(a);

}
