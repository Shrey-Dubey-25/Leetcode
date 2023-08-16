#include<iostream>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;

class bank{
    int bal;
    string name;
    long long banknu=100;

    public:
        bank(){
            bal=2000;
        }
        void checkbalance(){
            cout<< this->bal<<endl;
        }
        void withdraw(int n){
            if(n>this->bal){
                cout<<"not sucessful"<<endl;
            }
            else{
                cout<<"sucessful"<<endl;
                this->bal-=n;
            }
        }
        void deposit(int n){
            this->bal+=n;
        }
};

struct Node{
    int data;
    Node* lc;
    Node* rc;

    public:
        
        Node(int data){
            this->data=data;
            this->lc=NULL;
            this->rc=NULL;
        }
};

class tree{
    Node* root;
    public:
    tree(){
        root=NULL;
    }
        void insert(int data);
        void display();
};

void tree::insert(int d){
    cout<<this->root;
    if(this->root==NULL){
        Node* NN;
        NN->data=d;
        this->root=NN;
        cout<<"Inserted at root"<<endl;
        return;
    }

    else{
        if(d<=this->root->data){
            if(this->root->lc==NULL){
                Node* NN;
                NN->data=d;
                root->lc=NN;
                cout<<"Inserted at left"<<endl;
                return;
            }
            else{
                root=root->lc;
                insert(d);
            }
        }
        else{
            if(this->root->rc==NULL){
                Node* NN;
                NN->data=d;
                root->rc=NN;
                cout<<"Inserted at right"<<endl;
                return;
            }
            else{
                root=root->rc;
                insert(d);
            }
        }
    }
}

void tree::display(){
    Node* head=root;
    if(head==NULL){
        return ;
    }
}

//Wap to check strong number
//Wap to check armstrong number


int strongnu(int n){
    while(n>0){
        int d=n%10; 
    }
}



int main(){
    tree t=tree();
    t.insert(99);
    

    
    
}