#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
    int *arr;
    int size;
    int top; //top is index of array

 public:
   Stack(int size)
   {
       this->size=size;
       arr=new int(size); //we can also write this->arr=new int(size)
       top=-1;
   }
   void push(int d)
   {
       if(size-top>1){
        top++;
        arr[top]=d;
       }
       else
        cout<<"stack OverFlow"<<endl;
   }

   void pop()
   {
       if(top!=-1)
        top--;
       else
        cout<<"stack UnderFlow"<<endl;
   }

   bool isEmpty(){
       if(top==-1)
        return true;
       else 
        return false;
   }

   int peek()
   {
       if(top>=0)
       return arr[top];
       else
       {
       cout<<"stack is empty"<<endl;
       return -1;
       }
   }
};
int main()
{
   Stack st(5); //creating a stack with size 5
   st.push(20);
   st.push(22);
   st.push(24);
   st.push(26);
   st.push(28);
   st.push(30); //stack will overflow
   cout<<st.peek()<<endl;
}