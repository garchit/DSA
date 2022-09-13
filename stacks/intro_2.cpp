#include<iostream>
// #include<stack>
// #include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"element is not present"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"element is not here"<<endl;
        }
    }
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.isEmpty()<<endl;
    // st.push(4);
    // st.push(5);

    cout<<st.peek();
    return 0;
}