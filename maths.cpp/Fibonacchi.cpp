#include<iostream>

using namespace std;

int main(){
    int a , b , sum;
    a = 0;
    b = 1;
    cout << a <<" " << b << " ";
    for(int i = 0; i <= 10; i++){
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
    return 0;
}