#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int dat){
        this -> data = dat;
        this -> next = NULL;
    }
};
void display(node* &last){
    node* temp = last;
    do{
        temp = temp -> next;
        cout << temp -> data<<" ";

    }
    while(temp != last);
    cout<<endl;
}
void front(node* &last , int k){
    node* n = new node(k);
    n -> next = last -> next;
    last -> next = n;
}
void end(node* &last , int l){
    node* n = new node(l);
    // last -> next = last;
    n -> next = last -> next;
    last -> next = n;
    last = n;

}
void insert(node* &last , int dat , int node_val){
    node* n = new node(dat);
    node* temp = last -> next;
    while(temp -> data != node_val){
        temp = temp -> next;
    }
    n -> next = temp -> next;
    temp -> next = n; 

}
void delete_Node(node* &last , int node_val){
    node* prev = last -> next;
    node* temp = last -> next;

    while(temp -> data != node_val){
        prev = temp;
        temp = temp -> next;
        if(temp == last -> next){
            cout << "Node value Not FOUND";
            return;
        }
        prev -> next = temp -> next;
        delete temp;
    } 
}
int main(){
    node* last = new node(3);
    last -> next = last;
    front(last , 4);
    front(last , 9);

    display(last);

    end(last , 90);
    end(last , 123);

    display(last);
    
    insert(last , 6 , 4);
    insert(last , 7 , 90);
    
    display(last);
    return 0;
}