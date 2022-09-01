// reverse linked list
#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node* next;
    //constructor
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};
void reverse(node* &n1){
    node* prev = NULL;
    node* head = n1;
    while(n1 != NULL){
        head = head -> next;
        n1 -> next = prev;
        
        prev = n1;
        n1 = head;
    }
    n1 = prev;

}

void print(node* n1){
    while(n1 != NULL){
        cout<<n1 -> data<<" ";
        n1 = n1 -> next;
    }
    cout<<endl;
}
int main(){
    node* n1 = new node(1);
    node* n2 = new node(2);
    n1 -> next = n2;
    node* n3 = new node(3);
    n2 -> next = n3;
    node* n4 = new node(4);
    n3 -> next = n4;
    print(n1);
    reverse(n1);
    print(n1);
    return 0;
}