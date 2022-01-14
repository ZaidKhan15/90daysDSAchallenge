#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int Search(Node *head,int key)
{
  int idx = 0;
  while(head!=NULL){
  if(head->data==key){
      return idx;
  }
  idx++;
  head = head->next;
  
  }

  return -1;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
}




int main(){
   Node* head = new Node();
    Node* Second = new Node();
    Node* third = new Node();

    head->data=1;
    head->next=Second;

    Second->data=2;
    Second->next=third;

    third->data=5;
    third->next=NULL;

    
  
    display(head);
    cout<<Search(head,5);

}