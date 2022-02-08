#include<iostream>
#include"stackLL.h"
using namespace std;

int main(){
    Stack<char> s;
    s.push('e');
    s.push('d');
    s.push('c');
    s.push('b');
    s.push('a');

    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();


    return 0;
}