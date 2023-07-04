//stack implementation with some functions
#include <iostream>
using namespace std;
int MAXSIZE = 8;
int stack[8];
int top = -1;

int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}


int push(int data){
   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      cout<<"Could not insert data, Stack is full"<<endl;
   }
}

int main(){
   int i;
   push(44);
   push(10);
   push(62);
   push(123);
   push(15);
   cout<<"Stack Elements:"<<endl;


   for(i = top; i>=0; i++) {
      cout<<stack[i]<<" ";
   }cout<<endl;
   return 0;
}
