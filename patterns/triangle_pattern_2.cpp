#include<iostream>

using namespace std;

int main(){
    int n = 4;
    //int l = 1;
    for(int i = 0; i < n; i++){
        for(int k = 0; k <= n-i; k++){
            cout<<" "<<" ";
        }
        int l = i;
        for(int j = 0; j < 2*i + 1; j++){
            cout<<l<<" ";
            l++;
        }
        cout<<endl;
    }
    return 0;
}