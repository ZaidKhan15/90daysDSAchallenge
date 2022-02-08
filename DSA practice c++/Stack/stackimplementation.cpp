#include<iostream>
#include<stack>
using namespace std;

class Stack{

public:
int *arr;
int top;
int size;

//constructor
Stack(int size){
this->size = size;
arr = new int[size];
top = -1;
}

void push(int element){
    if(size - top > 1){
        top++;
        arr[top] = element;

    }
    else{
        cout<<"Stack Overflow"<< endl;
    }
}

void pop(){
if(top >= 0){
    top--;
}
else{
    cout<<"Stack Overflow"<<endl;
}
}
//peek returns the top element of the stack
int peek(){
if(top>=0){
    return arr[top];
}
else{
    cout<<"Stack OverFlowed"<<endl;
}
}

bool isEmpty(){
if(top == -1){
    return true;
}
else{
    return false;
}
}

};



int main(){
     //creating a stack
     Stack s(5);
     s.push(33);
     s.push(44);
     s.push(54);
     s.push(11);
     cout<<s.peek()<<endl;
     s.pop();
     cout<<s.peek()<<endl;
     s.pop();

    return 0;
}