#include<iostream>

using namespace std;

void pattern8(int n){
	for(int i=1;i<=n;i++){
		int num=i;
		for(int j=n-i;j>=1;j--){
			cout<<" ";
		}
		for(int k=0;k<i;k++){
			cout<<num;
			num++;
		}
		int num2=num-2;
		for(int l=1;l<i;l++){
			cout<<num2;
			num2--;
		}
		cout<<endl;
	}
}
int main(){
    int n;
    cin>>n;
    pattern8(n);
    return 0;
}