#include<bits/stdc++.h>
using namespace std;
const int Maxsize=500;
class Queue
{
public:

    int a[Maxsize];
    int l,r;
    Queue(){
    l=0;
    r=-1;

    }
    void enqueue(int val){
    if(r+1>= Maxsize){
    cout<<"queue full";
    return;
    }
    r++;
    a[r]=val;
    }
    void dequeue(){
    if(l>r){
    cout<<"queue empty";
    return;

    }
    l++;
    }
    int front(){
    if (l>r){
    cout<<"empty";
    return -1;
    }
    return a[l];
    }
    int size(){
    return r-l+1;
    }
};
int main(){
    Queue q;
    cout<<q.size()<<endl;
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.enqueue(5);
        cout<<q.front()<<endl;
        q.dequeue();
        cout<<q.front()<<endl;
        q.dequeue();
        q.dequeue();
        cout<<q.front()<<endl;
         cout<<q.size()<<endl;




}
