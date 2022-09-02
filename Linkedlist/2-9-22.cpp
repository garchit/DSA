// #include<iostream>

// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

//     node(int d){
//         this -> data = d;
//         this -> next = NULL;
//     }
// };

// bool palindrome(node* head1 , node* head2){
//     node* temp1 = head1;
//     node* temp2 = head2;
//     while(temp1 && temp2){
//         if(temp1 -> data == temp2 -> data){
//             temp1 = temp1 -> next;
//             temp2 = temp2 -> next;
//         }
//     }
//     else return 0;
// }
// void front(node* head){
//     node* temp = head;
//     while(temp -> next != NULL){
//         temp = temp -> next;
//     }
//     temp -> next = n;
// }
// int main(){
//     node* head1 , * head2;
//     int n;
//     cout << "Enter the no of nodes: /n";
//     cin >> n;
//     int num;
//     cout <<" enter 1st no \n";
//     cin >> num;

//     head1 = new node(num);
//     head2 = new node(num);

//     for(int i = 2; i<=n ; i++){
//         cout << "enter  "<< i<<" th number :\n";
//         cin >> num;

//         front(head , num);
//         end(head , num);
//     }
//     display(head1);
//     display(head2);
    
//     return 0;
// }
#include<iostream>
using namespace std;


class Node{
	public:
	int data;
	Node * next;
	
	Node(int val)
	{
		data = val;
		next = NULL;
	}
};

void display(Node *n){
	
	cout<<"The elements are: "<<endl;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n= n->next;
	}
	cout<<endl;
}

void front(Node * &head, int dat){
	Node * n = new Node(dat);
	if(head==NULL)
	{
		head = n;
		return;
		
	}
	n->next = head;
	head =n;
}

void end(Node *&head, int dat)
{
	Node * n = new Node(dat);
	if(head==NULL)
	{
		head = n;
		return;
	}
	
	Node* temp = head;
	while(temp->next !=NULL)
	{
		temp = temp->next;
	}
	
	temp->next = n;
	
}
bool pallindrome(Node * head1, Node*head2)
{
	Node* temp1 = head1;
	Node* temp2 = head2;
	while(temp1 && temp2)
	{
		if(temp1->data == temp2->data){
		
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	
	else return 0;
}
return 1;
}

int main(){
	Node * head1, *head2;
	int n;
	cout<<"Enter number of nodes:\n";
	cin>>n;
	int num;
	cout<<"Enter 1st number:\n";
	cin>>num;
	
	head1 = new Node(num);
	head2 = new Node(num);
	
	
	for(int i=2;i<=n;i++)
	{
		cout<<"Enter "<<i<<" th number:\n";
		cin>>num;
		
		front(head1,num);
		end(head2,num);
	}
	display(head1);
	if(pallindrome(head1,head2)){
		cout<<"yes"<<endl;
	}
	else{
	cout<<"No"<<endl;
	}

	display(head2);
	
	return 0;
}