#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;


};

void insertatpos(Node* n,int d,int pos){
  Node*t = new Node();
  t->data = d;
  if(n==NULL){
    n=t;
  }
  Node* temp = n;
  for(int jump=1;jump<=pos-1;jump++){
    temp = temp->next;
  }
  t->next = temp->next;
  temp->next = t;

}

// int tailinsert(Node* n,int d){
 
//  Node *t = new Node();
//   t->data = d;
  
//   Node* tail = n;
  
  
//   if(n==NULL){
//     n = t;
//   }
//   while(tail->next!= NULL){
//     tail = tail->next;
//   }
//    tail->next = t;
//    t->next =NULL;
  
  
// }
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
 Node* head = new Node();
    Node* Second = new Node();
    Node* third = new Node();

    head->data=1;
    head->next=Second;

    Second->data=2;
    Second->next=third;

    third->data=5;
    third->next=NULL;

    
    insertatpos(head,4,2);
    display(head);
}