#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

node* Kreverselist(node* head, int k){
    if(head == NULL){
        return NULL;
    }
    // reversing list
    node* curr = head;
    node* prev = NULL;
    node* forward = NULL;

    int cnt = 0;
    while(curr != NULL && cnt < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }

    if(forward != NULL){
        head -> next = Kreverselist(forward , k);
    }
    
    return prev;
}


void print(node* head){

    while(head != NULL){
        cout << head -> data <<" ";
        head = head -> next ;
    }
    cout << endl;
}
int main(){

    node* head = new node(1);
    node* n2 = new node(2);
    head -> next = n2;
    node* n3 = new node(3);
    n2 -> next = n3;
    node* n4 = new node(4);
    n3 -> next = n4;
    
    print(head);
    head=  Kreverselist(head , 2);
    print(head);
    return 0;
}