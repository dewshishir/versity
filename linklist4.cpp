#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node(int data){
    val =data;
    next = nullptr;

    }
};
void insertathead(Node* &head,int val){
    Node *temp = new Node(val);
    temp -> next=head;
    head=temp;
}
void insertattail(Node * &head,int val){
    Node * newn = new Node(val);
     Node* temp=head;
     while(temp->next !=nullptr){
     temp=temp->next;
     }
     temp -> next = newn;
}
void display(Node * head){
    Node * temp=head;
    while(temp!=nullptr){
    cout<<temp->val<<"->";
    temp = temp->next;
    }
    cout<<"null"<<endl;

}
int main(){
    Node * head=NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,4);
    display(head);
    insertattail(head,7);
    display(head);
    insertattail(head,8);
    display(head);

    //cout<<a->val<<" "<<a->next;
}
