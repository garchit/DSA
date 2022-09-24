#include<bits/stdc++.h>

using namespace std;
bool Armstrong(int n){
    int a = n;
    int count = 0;
    while(a  != 0){
        count++;
        a = a / 10;
    }
    int b = n;
    int sum = 0;
    while(b !=0){
        int temp = b % 10;
        sum = sum + pow(temp , count);
        b = b/10;
    }
    cout<<sum;
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the num"<<endl;
    cin>>n;
    if(Armstrong(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}