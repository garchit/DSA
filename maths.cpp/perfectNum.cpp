#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = 0;
    int sum = 0;
    // int i = 1;
    for(int i = 1; i <=n/2; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    cout<<sum<<endl;
    if(sum == n){
        cout<<"Perfect"<<endl;
    }
    else{
        cout<<"Not perfect"<<endl;
    }
    return 0;
}