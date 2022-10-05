#include<iostream>

using namespace std;
class circularQ{
    public:
    int * arr;
    int rear;
    int front;
    int size;

    circularQ(int n){
        front  = -1;
        rear = -1;
        size = n;
        arr = new int[size];
    }

    void equeue(int element){
        if((front == 0 && rear == size) ){
            cout <<"Queue is full"<<endl;
        }
        // int ans = arr[front];
        else if(front == -1){
            front = rear = 0;
            arr[rear] = element;
            rear++;
        }
        else if(front != 0 && rear == size-1){
            rear = 0;
            arr[rear] = element;
            rear++;
        }
        else{
            rear++;
            arr[rear] = element;
            
        }
    }
    void dequeue(){
        
        int ans = arr[front];
        arr[front] = -1;
        
        if(front = -1){
            cout<<"Queue is empty"<<endl;
        }
        
        else if(front == rear){
            front = rear = -1;
        }
        else if(front = size - 1){
            front = 0;
        }
        else{
            front++;
        }
        cout<<ans;
    }


void display(){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}
};
int main(){
    circularQ q(1);
    q.equeue(1);
    q.display();
    return 0;
}