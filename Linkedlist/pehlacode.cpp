#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d ){
        this -> data = d;
        this -> next = NULL;
    }

};
void transverse(node* n1){  // 1-->2-->NULL

    while(n1 != NULL){
        cout<<n1->data<<" ";
        n1 = n1 -> next;
    }
    cout<<endl;
}
void insertionEnd(node* n1 , int d){
    node* curr = new node(d);
    node* temp = n1;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = curr;


}

int main(){
    
    node* n1 = new node(1);
    // n1 -> data = 1;
    // n1 -> next = NULL;


    node* n2 = new node(2);
    // n2 -> data = 2;
     n1 -> next = n2;
    //  n2->next = NULL;     // 1-->2-->NULL
    transverse(n1);
    // node* n3 = new node(3);
    // node* n2 = new node;
    // n2 -> data = 2;
    // n1 -> next = n2;
     insertionEnd(n1 , 3);

     transverse(n1);
        return 0;
}