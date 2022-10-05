#include<iostream>
// #include<queue>
using namespace std;
class Queue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    Queue(){
        size = 1000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int data){
        if(rear == size){
            cout << "Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void dequeue(){
        if(front == rear){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0; 
                rear = 0;
            }
            return ans;
        }
    }
    int front(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
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
};
int main(){
    // queue<int>q;
    // q.push(2);
    // cout<<"front elelment is "<<q.front()<<endl;
    // q.push(4);
    // cout<<"front elelment is "<<q.front()<<endl;
    // q.push(6);
    // cout<<"rear elelment is "<<q.rear()<<endl;
    // cout<<q.size()<<endl;

    // q.pop();

    // cout<<q.size()<<endl;
    Queue Q;
    Q.enqueue(4);
    Q.enqueue(5);
    Q.enqueue(8);
    return 0;
}