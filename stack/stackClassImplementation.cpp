#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }

    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top<0){
            cout<<"Stack is underflow"<<endl;
        }
        else{
            top--;
        }
    }

    int peek(){
        if(top>-1){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true; 
        }
        else{
            return false;
        }
    }

};

int main(){

Stack s(5);
s.push(10);
s.push(100);
s.push(1000);
s.push(10000);
s.push(100000);

cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;

cout<<s.isEmpty()<<endl;

return 0;
}