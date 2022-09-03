#include<bits/stdc++.h>
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


node* getMiddle(node* head){
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

node* reverse(node* head){
    node* curr = head;
    node* prev = NULL;
    node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool isPalindrome(node* head){
    if(head == NULL || head -> next == NULL){
        return true;
    }



    // STEP -> 1find the middle element .. 
    node* middle = getMiddle(head);

    // cout<<middle->data<< " ";

    
    // STEP -> 2 reverse linked list after the middle ..
    node* temp = middle -> next;
    // middle waali node ke aage reverse waala part hai
    middle -> next = reverse(temp);

    // STEP -> 3 compare 
    node* head1 = head;
    node* head2 = middle -> next;

    while(head2 != NULL){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1  = head1 -> next;
        head2 = head2 -> next;

        // make the original list ..
        // temp = middle -> next;
        // middle -> next = reverse(temp);

        
    }
    return true;
}
int main(){
    // node * head = new node(1);
    // node * n2 = new node(2);
    // node * n3 = new node(3);
    // node * n4 = new node(2);
    // node * n5 = new node(1);

    // head -> next = n2;
    // n2 -> next = n3;
    // n3 -> next = n4;
    // n4 -> next = n5;


    // if(isPalindrome(head) == true){
    //     cout << "yes"<<endl;
    // }
    // else{
    //     cout<<"No"<<endl;
    // }

// 1 2 3 4 5
    node* head;
    node* temp;
    
    int n = 6;

    for(int i=0;i<n;i++){

        int data;
        cin>>data;



            if(i==0){
                

                head = new node(data);
                temp = head;
            }

            else{

                

                node* newNode = new node(data);
               
                temp -> next = newNode;
                temp = temp->next;
                
            }
    }


if(isPalindrome(head) == true){
        cout << "yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}