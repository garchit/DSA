#include<iostream>

using namespace std;
class twostacks{
    public:
    int *arr;
    int top1 , top2;
    int size;
    twostacks(int size){
        this -> size = size;
        arr = new int[size];
        top1 = size / 2;
        top2 = (size/2) -1 ; 
    }
    void push1(int data){
        if(top1 > 0){
            top1--;
            arr[top1] = data;
        }
        else{
            cout<<"Stack 1 overflow\n";
            return ;
        }
    }
    void push2(int data){
        if(top2 < size-1){
            top2++;
            arr[top2] = data;
        }
        else{
            cout << "stack 2 overflow\n";
            return ;
        }
    }
    void pop1(){
        if(top1 < size/2){
            cout<<"popped "<<arr[top1]<<endl;
            top1++;
        }
        else{
            cout<<"stack 1 underflow\n";
            return ;
        }
    }
    void pop2(){
        if(top2 > size/2-1){
            cout<<"popped "<<arr[top2]<<endl;
            top2--;
        }
    }
    void peek(){
        cout<<"top element in stack 1 is : "<<arr[top1]<<endl;
        cout<<"top element in stack 2 is : "<<arr[top2]<<endl;
    }
};
int main(){
    twostacks A(4);
    A.push1(1);
    A.push1(4);
    A.push2(5);
    A.push2(9);
    A.peek();
    A.pop1();
    A.pop2();

    return 0;
}