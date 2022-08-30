#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node* next;
    // constructor
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};
void print(node* head){
    int cnt = 0;
    while(head != NULL){
        cout << head -> data <<" ";
        head = head -> next;
        // cnt++;
    }
    cout<<endl;
    // return cnt;
}
void insertAtMiddle(node* head , int pos , int d){
    node* temp = new node(d);
    node* curr = head;
    if(pos == curr -> data){
        temp -> next = curr -> next;
        curr -> next = temp;
    }
    while(curr -> data != pos){
        curr = curr -> next;
        if(temp == NULL){
            return;
        }
    }
    temp -> next = curr -> next;
    curr -> next = temp;
}
int main(){
    node* n1 = new node(1);
    // node* n1 = head;
    node* n2 = new node(2);
    n1 -> next = n2;
    node* n3 = new node(3);
    n2 -> next = n3;
    node* n4 = new node(4);
    n3 -> next = n4;
    print(n1);
    insertAtMiddle(n1 , 2 , 9);
    print(n1);
    return 0;
}