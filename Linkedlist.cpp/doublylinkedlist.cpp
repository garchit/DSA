#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    //constructr
    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory saaf"<<val<<endl;
    }
};
void insertionAthead(node* &head , node* &tail , int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
    }
    else{
    node* temp = new node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
    
}
void insertionAtTail(node* &head , node* &tail , int d){
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
    }
    else{
    node* temp = new node(d);
    tail -> next = temp;
    // temp -> next = temp;
    temp -> prev = tail;
    tail = temp;
    }
    
}
void insertionAtPosition(node* &head , node* &tail, int pos , int d){
    if(pos == 1){
        insertionAthead(head , tail , d);
            return ;
        
    }
    node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }
    //inserting element at last..
    if(temp -> next == NULL){
        insertionAtTail(head ,tail , d);
        return;
    }
    node* nodeToInsert = new node(d);
        nodeToInsert -> next = temp -> next;
        temp -> next -> prev = nodeToInsert;
        temp -> next = nodeToInsert;
        nodeToInsert -> prev = temp;
    
}
void deletenode(int pos , node* & head){
    if(pos == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    
}
int getLength(node * head){
    node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    return len;
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
    // node* node1 = new node(10);
    node* head = NULL;
    node* tail = NULL;
    print(head);
    insertionAthead(head ,tail , 5);
    print(head);
    insertionAthead(head ,tail, 55);
    print(head);
    insertionAthead(head ,tail, 555);
    print(head); 
    insertionAtTail(head ,tail , 33);
    print(head);   
    insertionAtPosition(head , tail , 3 , 8);
    print(head);
    // cout<<getLength(head);
    return 0;
}