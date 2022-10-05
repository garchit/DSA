#include<iostream>

using namespace std;
class queue{
    public:
    int * arr;
    int size;
    int front;
    int rear;

    queue(int n){
        size = n;
        front = 0;
        rear = 0;
        arr = new int[size];
    }
    void push(int element){
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = element;
            rear++;
        }
    }
    void pop(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = 0;
            rear = 0;
        }
        cout<<ans<<endl;
        }
    }
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }
    void display( ){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    // int n;
    // cin>>n;
    // int arr[10];
    queue Q1(10);
    Q1.push(3);
    Q1.push(4);
    Q1.push(5);
    Q1.push(6);
    Q1.display();
    return 0;
}