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
void insertionTail(node* head , int k){
    node* temp = head;
    node* n = new node(k);
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    temp = n;
}
node* getmiddle(node* &head){
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void insertionHead(node* &head , int k){
    // node* curr = head;
    node* temp = new node(k);
    temp -> next = head;
    head = temp;
}
void jodna(node *&head1 , node *&head2){
    node* temp = head1;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = head2;
};
node* merge(node* &left , node* &right){
    // while()
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    node* ans = new node(-1);
    node* temp = ans;
    while(left != NULL && right != NULL){
        if(left -> data < right -> data){
            temp -> next = left;
            temp = temp->next;
            left = left -> next ;
        }
        else{
            temp -> next = right;
            temp = temp->next;
            right = right -> next ;
        }
    }
    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next ;
    }
    while(right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next ;
    }
    ans = ans -> next;
    return ans;
}
node* mergesort(node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node* left = head;
    node* mid = getmiddle(head);
    node* right = mid -> next;
    mid -> next = NULL;

    left = mergesort(left);
    right = mergesort(right);

    node* result = merge(left , right);
    return result;
    
}
int main(){
    node* head = new node(1);
    insertionHead(head , 3);
    insertionHead(head , 4);
    insertionHead(head , 5);
    insertionHead(head , 6);
    cout<<"1st linked list is :"<<endl;
    display(head);

    node* head2 = new node(2);
    insertionHead(head2 , 7);
    insertionHead(head2 , 8);
    insertionHead(head2 , 9);
    insertionHead(head2 , 10);
    cout<<"2nd linked list is :"<<endl;
    display(head2);

    cout<<"3rd list is :"<<endl;
    jodna(head , head2);
    display(head);
    node*newhead=mergesort(head);
    cout << "final result is : "<<endl;
    display(newhead);
    return 0;
}