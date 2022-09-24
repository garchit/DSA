#include<iostream>

using namespace std;
int reverse(int N){
    int ans = 0;
    while(N > 0){
        int rem = N % 10;
        ans = ans*10 + rem;
        N = N / 10;
    }
    return ans;
}
bool palindrome(int N){
    int let = reverse(N);
    if(let == N){
        return true;
    }
    else{
        return false;
    }
}
void armstrong(int N){
    int sum = 0;
    int temp = N;
    while(N > 0){
        int rem = N % 10;
        sum = sum + rem*rem*rem;
        N = N / 10;
    }
    //cout<<sum;
    if(sum == temp){
        cout << "Yes it is"; 
    }
    else{
        cout << "No it is not";
    }
    // return sum;
}
void fibonacci(int N){
    int t1 = 0;
    int t2 = 1;
    int next = 0;
    cout << "fibo "<<t1<<" "<<t2<<" ";
    next = t1 + t2;
    while(next <= N){
        cout<<next<<" ";
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
}
int main(){
    // int n = 45;
    if(palindrome(123)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    cout << endl;
    armstrong(371);
    cout << endl;
    fibonacci(50);
    // cout<<(bool)res;
    
    return 0;
}