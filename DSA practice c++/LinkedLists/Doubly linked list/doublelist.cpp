//DOUBLY LINKED LIST

#include<iostream>
using namespace std;
 
 class Node{
     public:
     int data;
     Node* next;
     Node* prev;

     //cosntructor
     Node(int d){
         this->data = d;
         this->prev = NULL;
         this->next = NULL;
     }
 };
void inseratHead(Node* &head,int x){
     Node* temp1 = new Node(x);
     
      temp1->next = head;
      head->prev = temp1;
      head = temp1;

 }

void insertatTail(Node* &tail,int x){
    Node* temp = new Node(x);
    
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
}

void insertatPos(Node* &head,Node* &tail,int pos,int x){
    if(head==NULL){
        inseratHead(head,x);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertatTail(tail,x);
        return;
    }

    Node* NodetoInsert = new Node(x);
    NodetoInsert->next = temp->next;
    NodetoInsert->prev = temp;
    temp->next = NodetoInsert;

}


void print(Node* head){
  Node* temp = head;
  while(temp!=NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
  }
  cout<<endl;
}

int main(){
Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;



inseratHead(head,11);
print(head);
insertatTail(tail,13);
insertatTail(tail,25);
insertatPos(head,tail,2,55);
print(head);

    return 0;
}