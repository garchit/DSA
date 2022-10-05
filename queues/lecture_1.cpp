#include<iostream>

using namespace std;
class queues{
    public:
    int *arr;
    int size;
    int first;
    int last;
    queues(int size){
        this -> size = size;
        arr =new int[size];
        first = -1;
        last = -1;
    }
    bool full(){
        if(last == size-1){
            return true;
        }
        return false;
    }
    void NQ(int data){
        if(!full()){
            last++;
            arr[last] = data;
            cout << "Enqueued "<<data<<endl;
        }
        else{
            cout << "Q overflow \n";
        }
    }
    void DQ(){
        if(!empty()){
            first++;
            cout << "Dequeued "<<arr[first];
        }
        else{
            cout<<"Q underflow\n";
        }
    }
    void first(){
        if(empty()){
            cout <<" Q is empty . Please fill \n";
            return ;
        }
        cout << "First in Q is : "<<arr[first+1];
    }
    void Last(){
        if(empty()){
            cout << "Q is empty . Please fill\n";
            return;
        }
        cout << "Last in Q is : "<<arr[last]<<endl;
    }
};
int main(){
    queues Q;
    Q.NQ(3);
    return 0;
}