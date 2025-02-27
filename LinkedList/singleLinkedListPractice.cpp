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


void insertAtHead(Node* &head,int data){
    Node* newNode = new Node(data);
    newNode->next=head;
    head=newNode;
}

void Display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->val<<" ";
        temp=temp->next;
    }
cout<<endl;
}


int main(){


Node* head=NULL;
insertAtHead(head,3);
Display(head);
insertAtHead(head,4);
insertAtHead(head,5);
Display(head);


}


