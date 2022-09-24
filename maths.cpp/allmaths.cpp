#include<iostream>
using namespace std;

//factorial of a number
int factorial(int n){
    if(n==0|| n==1) return 1;
    return n*factorial(n-1);
}

//reverse a number 
int reverse(int num){
    static int ans=0;
    if(num==0) return 0;
    ans=(num%10)+(ans*10);
    reverse(num/10);
    return ans;
}

//calculate the power
int power(int n,int a){
    if(a==0) return 1;
    return n*power(n,a-1);
}

//prime or not
bool checkprime(int n){
    if(n==1) return false;
    if(n==2) return true;
    static int a=2;
    if(a==n-1) return true;
    if(n%a==0) return false;
    a++;
    bool nn=checkprime(n);
    if(nn) return true;
    else  return false;
    // return true;
}

//fibonaci series
void fibonacci(int n){
    if(n==0) return ;
    if(n==1){
        cout<<"0"<<endl;
    }
    static int a=0,sum=0,b=1,c=0;
    if(a==n-1){
        return ;
    }
    if(a==0) cout<<sum<<" "<<b;
    else cout<<" "<<sum;
    sum=b+c;
    c=b;
    b=sum;
    a++;
    fibonacci(n);

}



int main(){
    // int n;
    // cin>>n;
    // int a=factorial(n);
    // cout<<a<<endl;
    // int b=reverse(n);
    // cout<<b<<endl;

    // int c=power(41,3);
    // cout<<c<<endl;

    if(checkprime(219)) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;

    // fibonacci(10);
    return 0;
}