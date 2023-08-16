#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data ;
    Node* next;
    Node(){
        data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    Node* head;
    public:
    LinkedList(){
        head=NULL;
    }
    void insertNode(int n);
    void deleteNode(int n);
    void findele(int n);
    void display();
    void reverse();
};

void LinkedList::insertNode(int n){
    Node* NN=new Node;
    NN->data=n;
    NN->next=NULL;
    if(head==NULL){
        head=NN;
        return ;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=NN;
    }
}

void LinkedList::findele(int v){
    Node* temp=head;
    if(head->next==NULL){
        cout<<"empty list ";
        return ;
    }
    int c=0;
    while(temp->next!=NULL){
        if(temp->data==v){
            cout<<"Found at = "<<c<<endl;
            return ; 
        }
        temp=temp->next;
        c++;
    }
    cout<<"Not present in the list"<<endl;
}


void LinkedList::display(){
    Node* temp=head;
    if(head==NULL){
        cout<<"empty List";
        return ;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void LinkedList::deleteNode(int index){
    Node* temp=head;
    Node* prev=NULL;
    
    if(temp==NULL){
        cout<<"Empty List"<<endl;
        return ;
    }
    if(index==0){
        head=head->next;
        cout<<"Successfully Deleted head"<<endl;
        return; 
    }
    
    int c=0;
    while(temp!=NULL && c!=index){
        prev=temp;
        temp=temp->next;
        c++;
    }

    if(temp==NULL){
        cout<<"Invalid Index"<<endl;
        return ;
    }

    prev->next=temp->next;
    cout<<"Successfully Deleted The node at "<<index<<endl;
}

void LinkedList::reverse(){
    Node* curr=head;
    Node* prev=NULL;
    Node* next=head->next;
    
    if(head==NULL){
        cout<<"Empty List"<<endl;
        return ;
    }

    if(head->next==NULL){
        cout<<"Only one element present "<<endl;
        return ;
    }
    
    while(next!=NULL){  
        
        curr->next=prev;
        prev=curr;
        curr=next;
        next=next->next;
    
    }
    curr->next=prev;
    head=curr;

}

int main(){
    
    LinkedList ll;
    ll.insertNode(40);
    ll.insertNode(50);
    ll.insertNode(60);
    ll.insertNode(70);
    ll.insertNode(80);
    
    cout<<"List:"<<endl;
    ll.display();

    ll.reverse();
    ll.display();
       
}