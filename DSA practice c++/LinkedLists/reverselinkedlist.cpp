#include<iostream>
using namespace std;

void reverse(Node* head,Node* curr,Node* prev){
    
    if(curr==NULL){
        head = prev;
        return;
    }
    reverse(head,curr->next,curr);
    curr->next = prev;
}

Node* reverseList(Node* head){
   
    
    Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;

}

int main(){

    return 0;
}