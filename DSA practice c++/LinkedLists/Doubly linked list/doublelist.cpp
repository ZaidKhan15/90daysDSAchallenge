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
     ~Node(){
         if(this->next!=NULL){
             delete next;
             this->next = NULL;
         }
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

void deleteatNode(Node* &head,Node* &tail,int pos){
     
     if(pos==1){
         Node* temp = head;
         temp->next->prev = NULL;
         head = temp->next;
         temp->next = NULL;
         
         delete temp;
     }
     else{
         Node* curr = head;
         Node* prevNode = NULL;

         int cnt = 1;
         while(cnt < pos){
             prevNode = curr;
             curr = curr->next;
             cnt++;
         }
         
        //  if(curr->next == NULL){
        //   //TAIL SHIFTING CODE
        //      curr->prev = NULL;
        //      prevNode->next = NULL;
        //      delete curr;
        //      tail = prevNode;

        //  }
         curr->prev = NULL;
         prevNode->next = curr->next;
         curr->next = NULL;
         if(prevNode->next==NULL){
             tail = prevNode;
         }
         
         delete curr;

     }
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
deleteatNode(head,tail,5);
cout<<head->data<<endl;
cout<<tail->data<<endl;
print(head);
cout<<head->data<<endl;
cout<<tail->data<<endl;

    return 0;
}