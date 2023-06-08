#include <bits/stdc++.h>
using namespace std;
int stack[100],n =100,top = -1;
int main(int argc, char const *argv[])
{
   int ch,v;
   cout<<"1) push in stack"<<endl;
   cout<<"2) push form stack"<<endl;
   cout<<"3) display stack"<<endl;
   cout<<"4) exit"<<endl;
   do{
      cout<<"enter choice: "<<endl;
      cin>>ch;
      swich(ch){
         case 1: {
            cout<<"enter value pushed:"<<endl;
            cin>>val;
            push(val);
         }
      }
   }
   return 0;
}