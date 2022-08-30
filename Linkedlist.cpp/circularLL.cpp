#include<iostream>

using namespace std;
class node{
    public:
    int data ;
    node* next;
    // constructor
    node(int d){
        this -> data = d;
        this ->next = NULL;
    }
    ~node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free "<<val<<endl;
    }
};
void insertNode(node* &tail , int element , int d){
    // empty lists
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        temp-> next = temp ;
    }
    // non empty lists
    // assuming element is in list
    node* curr = tail;
    while(curr -> data != element){
        curr = curr -> next;
    }
    // element found..
    node* a = new node(d);
    a -> next = curr -> next;
    curr -> next = a;
}
void deletionNode(node* & tail , int val){
    if(tail == NULL){
        cout<<"The list is empty "<<endl;
        return ;
    }
    else{
        node* prev = tail;
        node* curr = prev -> next;
        while(curr -> data != val){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data<<" ";
        temp = temp -> next;
        // cout<<" ";
    }
    cout<<endl;
}
int main(){
    node* tail = NULL;
    // empty lists mein insert kre 
    insertNode(tail , 5 ,3);
    print(tail);
    // insertion
    insertNode(tail , 5 ,7);
    print(tail);
    insertNode(tail , 9 ,4);
    print(tail);
    //insertionNode(tail , 2 , 2)
    //print(tail);
    return 0;
}