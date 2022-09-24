#include<iostream>

using namespace std;
int reverseDigit(int n){
    int temp = 0;
    while(n > 0){

    
        //int temp = 0;
        int rem = n%10;
        temp = temp*10 + rem;
        n = n / 10;
    }
    return temp;
    if(n < 10){
        return n;
    }
}
int main(){
    cout<<reverseDigit(4);
    return 0;
}