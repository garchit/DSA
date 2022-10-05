
#include <iostream>

using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class queue{
    Node* front=NULL;
    Node* back=NULL;
    public:
    bool isEmpty(){
        return front==NULL;
    }
    void insert(int val){
        Node* n=new Node(val);
        if(front==NULL){
            front=n;
            back=n;
            return ;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(isEmpty()){
            return;
        }
        front=front->next;
    };
    void display(){
        Node* temp=front;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(temp!=front);
    }
};



int main()
{
    queue a;
    a.insert(6);
    a.insert(5);
    a.insert(3);
    a.insert(9);
    a.insert(2);
    a.pop();
    a.pop();
    a.insert(1);
    a.display();

    return 0;
}