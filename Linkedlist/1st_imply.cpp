#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }


};
// deleton of nodes .. 
    void deleteNode(int pos , node* &head){
        if(pos == 1){
            node* temp = head;
            head = head -> next;
            //memory free
            temp -> next = NULL;
            delete temp;
        }
        else{
            node* curr = head;
            node* prev = NULL;

            int cnt = 1;
            while(cnt < pos){
                prev = curr;
                curr = curr -> next;
                cnt++;
            }
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }
    }


    void insertionAtHead(node* &head , int d){
        // making new link list of name temp
        node* temp = new node(d);
        // pointing of temp pointer to the old one
        temp -> next = head;
        // new header pointer is temp
        head = temp;
    }

    void insertionAtEnd(node* &tail , int d){
        node* temp = new node(d);
        // while(tail->next != NULL){
        //     tail 
        // }
        tail -> next = temp;
        tail = tail -> next;
        
    }
    void insertionAtmiddle(node* & head , int pos , int d){
        node* temp = head;
        int cnt = 1;
        while(cnt < pos-1){
            temp = temp->next;
            cnt++;
        }
        node* nodeToInsert = new node(d);
        nodeToInsert -> next = temp -> next;
        temp -> next = nodeToInsert; 
    }


    void print(node* & n  ){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           head){
        
        node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<" ";// if(temp-> data == 20


            temp = temp -> next;
        }
        cout << endl;
    }




int main(){
    node* Node = new node(10);
    // cout<<node_1 -> data << endl;
    // cout<<node_1 -> next << endl;

    //head pointed to node 1
    node* head = Node;
    node* tail = Node;
    print(Node);

    // insertionAtHead(head , 12);
    // print(head);

    insertionAtEnd(tail , 122);
    print(head);

    insertionAtmiddle(head , 2 , 6);
    print(head);

    deleteNode(2 , head);
    print(head);
    return 0;
}