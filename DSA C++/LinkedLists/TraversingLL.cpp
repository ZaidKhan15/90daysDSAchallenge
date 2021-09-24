#include<iostream>
using namespace std;
//We have to create a node class as we need it to access in the main class 
class Node {
  
   public:
   int data;
   Node* next;
};

//Dispay function to display the data in th Linked list
int display(Node* n)
{
while (n != NULL)
{
    cout<<n->data<<"->";
    n = n->next;
}
 cout<<"NULL";
}



int main()
{
    Node* head = NULL;
    Node* Second = NULL;
    Node* third = NULL;

    head = new Node();
    Second = new Node();
    third = new Node();

    head->data=1;
    head->next=Second;

    Second->data=2;
    Second->next=third;

    third->data=3;
    third->next=NULL;

    display(head);

}