/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class node{
    public:
    int data;
    node* next ;
    
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};
void code(node* head , int k , int d){
    int cnt = 0;
    node* temp = head;
    while(temp != NULL){
       
        if(temp -> data == k){
            cnt++;
        }
    // cout<<cnt<<"count"<<endl;
        if(cnt == 2){
            break;
        }
        
        temp = temp->next;
        
    }
            node* curr = new node(d);
            curr -> next = temp -> next;
            temp -> next = curr;
        
    
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}
int main()
{
    node* head = new node(3);
    node* n2 = new node(6);
    node* n3 = new node(18);
    node* n4 = new node(90);
    node* n5 = new node(6);
    node* tail = new node(44);
    // cout<<"Hello World";
    head -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = n5;
    n5 -> next = tail;
    
    print(head);
    cout<<endl;
    code(head , 6 , 2);
    
    print(head);
    

    return 0;
}
