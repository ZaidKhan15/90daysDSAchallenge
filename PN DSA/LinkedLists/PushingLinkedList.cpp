#include<iostream>
#include"list.h"

using namespace std;

int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(2);
    l.push_back(4);

    l.insert(3,3);

    l.insert(10,0);

    Node* head = l.begin();
    while (head!=NULL)
    {
        cout<<head->getdata()<<"->";
        head = head->next;
    }
    cout<<"NULL";

    return 0;
}