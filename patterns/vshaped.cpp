#include<iostream>

using namespace std;

int reverse(int n){
    int temp = 0;
    while(n != 0){
    int rem = n % 10;
    
    temp = temp*10 + rem;
    
    n = n / 10; 
    }
    return temp;
} 
int main(){
    int n;
    cin>>n;
    int ans = reverse(n);
    cout<<ans;
    return 0;
}