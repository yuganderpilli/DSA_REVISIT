#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};




void insertAtHead(Node* &head,int val){
    Node* newNode= new Node(val);
    newNode->next=head;
    head=newNode;
}


void insertAtEnd(Node* &head, int val){
    Node* newNode= new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtK(Node* &head,int pos, int val){
    int tempPos=0;
    Node* newNode= new Node(val);
    Node* temp = head;
    while(temp->next!=NULL && tempPos!=pos-1){
        temp=temp->next;
        tempPos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}


void updateAtPos(Node* &head,int pos,int value){
    Node* temp=head;
    int count=0;
    while(temp!= NULL && count<pos-1){
        temp=temp->next;
        count+=1;
    }
    if(temp!=NULL){
        temp->val=value;
    }
}



void DeleteAtStart(Node* &head){
    
    Node* temp=head;
    head=temp->next;
    free(temp);

}

void DeleteAtTail(Node* &head){

    Node*temp=head;
 
    while(temp->next->next!=NULL){
        temp=temp->next;
     }
     Node* last= temp->next;
    temp->next=NULL;
    free(last);

}





void Display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}



int main(){


Node* head = NULL;
insertAtHead(head,3);

insertAtHead(head,4);

insertAtEnd(head,7);
Display(head);
cout<<endl;
insertAtK(head,2,5);
Display(head);
DeleteAtStart(head);
cout<<endl;
Display(head);
DeleteAtTail(head);
cout<<endl;
Display(head);
insertAtEnd(head,7);
insertAtEnd(head,8);
insertAtEnd(head,9);
insertAtEnd(head,10);
insertAtEnd(head,11);
cout<<endl;
Display(head);

updateAtPos(head,1,99);
cout<<endl;
Display(head);


}
