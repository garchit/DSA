#include<iostream>

using namespace std;

int main(){
    int n;
    int v = 0;
    cout<<"Enter the num "<<endl;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = n-i; j > 0; j--){
            cout<<v<<" ";
            v++;
        }
        cout<<endl;
    }
    return 0;
}