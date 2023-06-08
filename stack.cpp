#include<bits/stdc++.h>
using namespace std;
const int Maxsize=500;
class Stack{
public:

int a[Maxsize];
int stacsiz;
Stack(){
    stacsiz=0;
}
void push(int val){
if(stacsiz+1>Maxsize){
    cout<<"stack is full";
    return ;
}
    stacsiz=stacsiz+1;
    a[stacsiz-1]=val;
}
void pop(){
if(stacsiz==0){
cout<<"stack is empty";
}
a[stacsiz-1]=0;
stacsiz=stacsiz-1;
}
int top(){
    if(stacsiz==0){
    cout<<"stack empty";
    return -1;
    }
    return a[stacsiz-1];
}
};
int main(){
    Stack st;
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    cout<<st.top()<<endl;
    st.push(5);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
}
