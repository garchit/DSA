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


int getlength(node * head){
    int cnt = 0;
    while(head != NULL){
        head = head -> next;
        cnt++;
    }

    return cnt;


}
node* middle(node* head ){
    // node* temp = head;
    int len = getlength(head);
    int ans = len / 2;
    node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp -> next;
        cnt++;
    }
    return temp;
}
void print(node* head){
    // int cnt = 0;
    while(head != NULL){
        // if()
        cout << head -> data<<" -> " ;
        head = head -> next;
        // cnt++;
    }
}

 void findMiddle(node* head , int mid){

        int count = 0;

       while(head != NULL){
       
                    
        count++;

        if(count == mid+1){
            cout<<"Mid : "<<head->data<<endl;
            break;

        }

        head = head -> next;


        // cnt++;
    }
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
    int n = getlength(head);  // 5 


cout<<endl;

    int mid = n/2;  // 2

    findMiddle(head , mid);









    return 0;
}